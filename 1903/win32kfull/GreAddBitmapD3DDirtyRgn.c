/*
 * XREFs of GreAddBitmapD3DDirtyRgn @ 0x1C026C95C
 * Callers:
 *     DxgkEngAddRedirBitmapD3DDirtyRgn @ 0x1C0274160 (DxgkEngAddRedirBitmapD3DDirtyRgn.c)
 * Callees:
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C002AA9C (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C002AAD0 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z @ 0x1C0046D48 (-bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z.c)
 *     ?bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ @ 0x1C0046E0C (-bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ.c)
 *     ??0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C0046F08 (--0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x1C006C2C0 (-vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z.c)
 */

struct DwmState *__fastcall GreAddBitmapD3DDirtyRgn(HWND a1, unsigned int a2, struct _RECTL *a3)
{
  UINT_PTR v3; // rdi
  struct DwmState *result; // rax
  int v8; // r14d
  unsigned int v9; // ebp
  struct DWMSPRITE *v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // rbp
  __int64 v13; // rax
  struct DWMSPRITE *v14; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v15[48]; // [rsp+38h] [rbp-30h] BYREF
  unsigned int v16; // [rsp+88h] [rbp+20h] BYREF

  v3 = 0LL;
  v16 = 0;
  result = g_pDwmState;
  v8 = 0;
  v9 = 0;
  if ( g_pDwmState )
  {
    GreAcquireSemaphoreSharedInternal(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDwmState", ghsemDwmState);
    DWMALTSPRITEREF::DWMALTSPRITEREF((DWMALTSPRITEREF *)&v14, a1);
    v10 = v14;
    if ( v14 )
    {
      PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v15, (struct DWMSPRITE *)((char *)v14 + 88));
      v11 = *((_QWORD *)v10 + 21);
      PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v14, (struct _EX_PUSH_LOCK *)(v11 + 256));
      if ( (unsigned int)SFMLOGICALSURFACE::bDeviceBitmap((SFMLOGICALSURFACE *)v11) )
      {
        v8 = 1;
        if ( a2 )
        {
          v12 = a2;
          do
          {
            vSpUpdateDirtyRgn(v10, (struct SFMLOGICALSURFACE *)v11, 0LL, a3++, &v16, 0);
            --v12;
          }
          while ( v12 );
          v9 = v16;
        }
      }
      PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v14);
      if ( v8 )
      {
        v13 = *(_QWORD *)(v11 + 184);
        if ( v13 )
          v3 = *(_QWORD *)(v13 + 8);
        bSpDwmNotifyDirty(*(HSPRITE *)v10, (struct SFMLOGICALSURFACE *)v11, v9, v3);
      }
      PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v15);
      DEC_SHARE_REF_CNT(v10);
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    return (struct DwmState *)GreReleaseSemaphoreInternal(ghsemDwmState);
  }
  return result;
}
