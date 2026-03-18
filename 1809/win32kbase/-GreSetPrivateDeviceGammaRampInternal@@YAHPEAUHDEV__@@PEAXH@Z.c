/*
 * XREFs of ?GreSetPrivateDeviceGammaRampInternal@@YAHPEAUHDEV__@@PEAXH@Z @ 0x1C00026CC
 * Callers:
 *     ?GreSetPrivateDeviceGammaRamp@@YAHPEAUHDC__@@PEAXH@Z @ 0x1C009D840 (-GreSetPrivateDeviceGammaRamp@@YAHPEAUHDC__@@PEAXH@Z.c)
 * Callees:
 *     ?ComposeDeviceGammaRampsUnsafe@PDEVOBJ@@QEAAXXZ @ 0x1C0002854 (-ComposeDeviceGammaRampsUnsafe@PDEVOBJ@@QEAAXXZ.c)
 *     ?bGammaRampCapable@PDEVOBJ@@QEAAHXZ @ 0x1C0002900 (-bGammaRampCapable@PDEVOBJ@@QEAAHXZ.c)
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C0025778 (PALLOCMEM2.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00AF880 (memmove.c)
 */

__int64 __fastcall GreSetPrivateDeviceGammaRampInternal(HDEV a1, unsigned __int16 *a2, int a3)
{
  int v4; // r15d
  int v7; // ebp
  unsigned int v8; // edi
  __int64 i; // rcx
  int v10; // edx
  __int64 v11; // rax
  __int64 v12; // rax
  int v14; // r11d
  int v15; // r9d
  int v16; // r8d
  int v17; // edx
  int v18; // eax
  unsigned int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rcx
  HDEV v22; // [rsp+50h] [rbp+8h] BYREF

  v22 = a1;
  v4 = 0;
  v7 = 1;
  if ( (unsigned int)PDEVOBJ::bGammaRampCapable((PDEVOBJ *)&v22) )
  {
    v8 = 1;
    for ( i = 0LL; (v8 && a3 || v7) && (unsigned int)i < 0x100; i = (unsigned int)(i + 1) )
    {
      if ( a3 )
      {
        v14 = a2[i];
        v15 = a2[i + 256];
        v16 = ((_DWORD)i << 8) - 0x8000;
        v17 = ((_DWORD)i << 8) + 0x8000;
        if ( v14 < v16 || v14 > v17 || v15 < v16 || v15 > v17 || (v18 = a2[i + 512], v18 < v16) || v18 > v17 )
          v8 = 0;
      }
      if ( v7 )
      {
        v10 = (_DWORD)i << 8;
        if ( a2[i] != (_DWORD)i << 8 || a2[i + 256] != v10 || a2[i + 512] != v10 )
          v7 = 0;
      }
    }
    if ( v8 )
    {
      if ( !*((_QWORD *)a1 + 212) && !v7 )
      {
        v11 = PALLOCMEM2(0x600uLL);
        if ( v11 )
          *((_QWORD *)a1 + 212) = v11;
        else
          v8 = 0;
      }
      if ( v8 )
      {
        if ( v7 )
        {
          if ( *((_QWORD *)a1 + 211) )
            a2 = (unsigned __int16 *)*((_QWORD *)a1 + 211);
          v19 = (*((__int64 (__fastcall **)(_QWORD, __int64, unsigned __int16 *))a1 + 403))(
                  *((_QWORD *)a1 + 225),
                  1LL,
                  a2);
          v20 = *((_QWORD *)a1 + 212);
          v8 = v19;
          if ( v20 )
          {
            *((_QWORD *)a1 + 212) = 0LL;
            Win32FreePool(v20);
          }
          v21 = *((_QWORD *)a1 + 213);
          if ( v21 )
          {
            *((_QWORD *)a1 + 213) = 0LL;
            Win32FreePool(v21);
          }
        }
        else
        {
          memmove(*((void **)a1 + 212), a2, 0x600uLL);
          if ( *((_QWORD *)a1 + 211) )
          {
            v4 = 1;
            if ( !*((_QWORD *)a1 + 213) )
            {
              v12 = PALLOCMEM2(0x600uLL);
              if ( v12 )
                *((_QWORD *)a1 + 213) = v12;
              else
                v8 = 0;
            }
          }
          if ( v8 )
          {
            if ( v4 )
              PDEVOBJ::ComposeDeviceGammaRampsUnsafe((PDEVOBJ *)&v22);
            return (*((unsigned int (__fastcall **)(_QWORD, __int64))a1 + 403))(*((_QWORD *)a1 + 225), 1LL);
          }
        }
      }
    }
  }
  else
  {
    return 0;
  }
  return v8;
}
