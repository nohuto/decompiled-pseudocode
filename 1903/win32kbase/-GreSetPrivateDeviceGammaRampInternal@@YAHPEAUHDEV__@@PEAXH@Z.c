/*
 * XREFs of ?GreSetPrivateDeviceGammaRampInternal@@YAHPEAUHDEV__@@PEAXH@Z @ 0x1C012EFAC
 * Callers:
 *     ?GreSetPrivateDeviceGammaRamp@@YAHPEAUHDC__@@PEAXH@Z @ 0x1C012EEDC (-GreSetPrivateDeviceGammaRamp@@YAHPEAUHDC__@@PEAXH@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C00148AC (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00C1540 (memmove.c)
 *     ?ComposeDeviceGammaRampsUnsafe@PDEVOBJ@@QEAAXXZ @ 0x1C012EE00 (-ComposeDeviceGammaRampsUnsafe@PDEVOBJ@@QEAAXXZ.c)
 *     ?GetAppliedGammaRampTable@PDEVOBJ@@QEAAPEAXXZ @ 0x1C012EEAC (-GetAppliedGammaRampTable@PDEVOBJ@@QEAAPEAXXZ.c)
 *     ?bGammaRampCapable@PDEVOBJ@@QEAAHXZ @ 0x1C012F1E4 (-bGammaRampCapable@PDEVOBJ@@QEAAHXZ.c)
 */

__int64 __fastcall GreSetPrivateDeviceGammaRampInternal(HDEV a1, unsigned __int16 *a2)
{
  int v3; // r14d
  int v5; // esi
  int v6; // r11d
  unsigned int v7; // edi
  __int64 i; // rcx
  int v9; // r10d
  int v10; // r8d
  int v11; // r9d
  int v12; // edx
  int v13; // eax
  int v14; // edx
  void *v15; // rax
  void *v16; // rax
  void *AppliedGammaRampTable; // rax
  unsigned int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rcx
  HDEV v22; // [rsp+40h] [rbp+8h] BYREF

  v22 = a1;
  v3 = 0;
  v5 = 1;
  if ( (unsigned int)PDEVOBJ::bGammaRampCapable((PDEVOBJ *)&v22) )
  {
    v7 = 1;
    for ( i = 0LL; (v7 && v6 || v5) && (unsigned int)i < 0x100; i = (unsigned int)(i + 1) )
    {
      if ( v6 )
      {
        v9 = a2[i];
        v10 = a2[i + 256];
        v11 = a2[i + 512];
        v12 = ((_DWORD)i << 8) + 0x8000;
        v13 = ((_DWORD)i << 8) - 0x8000;
        if ( v9 < v13 || v9 > v12 || v10 < v13 || v10 > v12 || v11 < v13 || v11 > v12 )
          v7 = 0;
      }
      if ( v5 )
      {
        v14 = (_DWORD)i << 8;
        if ( a2[i] != (_DWORD)i << 8 || a2[i + 256] != v14 || a2[i + 512] != v14 )
          v5 = 0;
      }
    }
    if ( v7 )
    {
      if ( !*((_QWORD *)a1 + 212) && !v5 )
      {
        v15 = PALLOCMEM2(0x600uLL, 0x61676947u, 0);
        if ( v15 )
          *((_QWORD *)a1 + 212) = v15;
        else
          v7 = 0;
      }
      if ( v7 )
      {
        if ( v5 )
        {
          if ( *((_QWORD *)a1 + 211) )
            a2 = (unsigned __int16 *)*((_QWORD *)a1 + 211);
          v18 = (*((__int64 (__fastcall **)(_QWORD, __int64, unsigned __int16 *))a1 + 403))(
                  *((_QWORD *)a1 + 225),
                  1LL,
                  a2);
          v19 = *((_QWORD *)a1 + 212);
          v7 = v18;
          if ( v19 )
          {
            *((_QWORD *)a1 + 212) = 0LL;
            Win32FreePool(v19);
          }
          v20 = *((_QWORD *)a1 + 213);
          if ( v20 )
          {
            *((_QWORD *)a1 + 213) = 0LL;
            Win32FreePool(v20);
          }
        }
        else
        {
          memmove(*((void **)a1 + 212), a2, 0x600uLL);
          if ( *((_QWORD *)a1 + 211) )
          {
            v3 = 1;
            if ( !*((_QWORD *)a1 + 213) )
            {
              v16 = PALLOCMEM2(0x600uLL, 0x676F6947u, 0);
              if ( v16 )
                *((_QWORD *)a1 + 213) = v16;
              else
                v7 = 0;
            }
          }
          if ( v7 )
          {
            if ( v3 )
              PDEVOBJ::ComposeDeviceGammaRampsUnsafe((PDEVOBJ *)&v22);
            AppliedGammaRampTable = PDEVOBJ::GetAppliedGammaRampTable((PDEVOBJ *)&v22);
            return (*((unsigned int (__fastcall **)(_QWORD, __int64, void *))a1 + 403))(
                     *((_QWORD *)a1 + 225),
                     1LL,
                     AppliedGammaRampTable);
          }
        }
      }
    }
  }
  else
  {
    return 0;
  }
  return v7;
}
