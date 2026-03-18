/*
 * XREFs of NtGdiResizePalette @ 0x1C029BC50
 * Callers:
 *     <none>
 * Callees:
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@H@Z @ 0x1C00118D8 (--0MDCOBJA@@QEAA@PEAUHDC__@@H@Z.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C00127A8 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C004899C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C00E32F0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015EAE8 (--1MDCOBJ@@QEAA@XZ.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C015EF38 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C0160E10 (--1EPALOBJ@@QEAA@XZ.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0291554 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bSwap@XEPALOBJ@@QEAAHPEAPEAVPALETTE@@KK@Z @ 0x1C029EAA0 (-bSwap@XEPALOBJ@@QEAAHPEAPEAVPALETTE@@KK@Z.c)
 */

__int64 __fastcall NtGdiResizePalette(HPALETTE a1, unsigned int a2)
{
  unsigned int v3; // ebx
  unsigned int v4; // esi
  int v5; // ecx
  __int64 v6; // r8
  unsigned int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  HDC v12; // rdi
  unsigned __int16 v13; // cx
  __int64 v14; // rdx
  __int64 *v15; // rcx
  unsigned int v16; // r8d
  unsigned int v17; // r9d
  signed __int32 v18; // ecx
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // r14
  HDC v22; // rbx
  __int64 v24; // [rsp+50h] [rbp-9h] BYREF
  int v25; // [rsp+58h] [rbp-1h]
  _QWORD v26[2]; // [rsp+60h] [rbp+7h] BYREF
  _QWORD v27[2]; // [rsp+70h] [rbp+17h] BYREF
  _QWORD v28[6]; // [rsp+80h] [rbp+27h] BYREF
  int v29; // [rsp+C8h] [rbp+6Fh] BYREF
  struct PALETTE *v30; // [rsp+D0h] [rbp+77h] BYREF
  __int64 v31; // [rsp+D8h] [rbp+7Fh] BYREF

  if ( a2 - 1 <= 0x3FF )
  {
    v3 = 0;
    v4 = 0;
    EPALOBJ::EPALOBJ((EPALOBJ *)&v30, a1);
    if ( v30 )
    {
      if ( v30 != ppalDefault )
      {
        v5 = *((_DWORD *)v30 + 6);
        if ( (v5 & 0x100) != 0 )
        {
          if ( (v5 & 0x800) != 0 && a2 != 256 )
            goto LABEL_32;
          v25 = 0;
          v24 = 0LL;
          if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v24, 1u, a2, 0LL, 0, 0, 0, 0x500u, 1) )
          {
            v31 = ghsemPalette;
            GreAcquireSemaphore(ghsemPalette);
            v6 = *((unsigned int *)v30 + 7);
            v7 = *(_DWORD *)(v24 + 28);
            if ( (unsigned int)v6 >= v7 )
              v6 = v7;
            memmove(*(void **)(v24 + 112), *((const void **)v30 + 14), 4 * v6);
            *(_DWORD *)(v24 + 24) = *((_DWORD *)v30 + 6);
            *(_QWORD *)(v24 + 40) = *((_QWORD *)v30 + 5);
            *(_QWORD *)(v24 + 48) = *((_QWORD *)v30 + 6);
            *(_DWORD *)(v24 + 56) = *((_DWORD *)v30 + 14);
            XEPALOBJ::vComputeCallTables((XEPALOBJ *)&v24);
            GreAcquireHmgrSemaphore(v9, v8, v10, v11);
            v12 = *(HDC *)(v24 + 40);
            while ( v12 )
            {
              MDCOBJ::MDCOBJ((MDCOBJ *)v26, v12);
              if ( !v26[0] )
                goto LABEL_16;
              v13 = *(_WORD *)(v26[0] + 12LL);
              if ( v13 > 1u )
              {
                TraceLoggingWriteUnsupportedGdiUsage(5LL, *((unsigned int *)v30 + 6), v13);
LABEL_16:
                MDCOBJ::~MDCOBJ((MDCOBJ *)v26);
                goto LABEL_25;
              }
              v12 = *(HDC *)(v26[0] + 984LL);
              XDCOBJ::RestoreAttributes((XDCOBJ *)v26);
              v26[0] = 0LL;
              MDCOBJ::~MDCOBJ((MDCOBJ *)v26);
            }
            XEPALOBJ::vMakeNoXlate((XEPALOBJ *)&v30);
            v18 = _InterlockedIncrement(*(volatile signed __int32 **)&ulXlatePalUnique);
            *((_DWORD *)v30 + 8) = v18;
            v19 = *((_QWORD *)v30 + 15);
            if ( (struct PALETTE *)v19 != v30 )
              *(_DWORD *)(v19 + 32) = v18;
            v4 = XEPALOBJ::bSwap((XEPALOBJ *)&v24, &v30, v16, v17);
            if ( v4 )
            {
              v20 = v24;
              v12 = *(HDC *)(v24 + 40);
              if ( !v12 )
                goto LABEL_26;
              do
              {
                MDCOBJA::MDCOBJA((MDCOBJA *)v28, v12);
                v15 = (__int64 *)v28[0];
                if ( !v28[0] )
                  break;
                *(_QWORD *)(v28[0] + 88LL) = v30;
                *((_DWORD *)v15 + 79) |= 0xFu;
                v12 = (HDC)v15[123];
                v29 = 0;
                v21 = *v15;
                HmgDecrementShareReferenceCountEx(v15, &v29);
                if ( v29 )
                  bDeleteDCInternalEx(v21, 0LL);
              }
              while ( v12 );
            }
LABEL_25:
            v20 = v24;
LABEL_26:
            v22 = *(HDC *)(v20 + 40);
            while ( v22 != v12 )
            {
              MDCOBJ::MDCOBJ((MDCOBJ *)v27, v22);
              _InterlockedDecrement((volatile signed __int32 *)(v27[0] + 12LL));
              v22 = *(HDC *)(v27[0] + 984LL);
              MDCOBJ::~MDCOBJ((MDCOBJ *)v27);
            }
            GreReleaseHmgrSemaphore(v15, v14);
            SEMOBJ::vUnlock((SEMOBJ *)&v31);
          }
          PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v24);
        }
      }
    }
    v3 = v4;
LABEL_32:
    EPALOBJ::~EPALOBJ((EPALOBJ *)&v30);
    return v3;
  }
  return 0LL;
}
