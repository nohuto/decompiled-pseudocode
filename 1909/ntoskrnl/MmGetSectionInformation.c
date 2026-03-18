/*
 * XREFs of MmGetSectionInformation @ 0x1406C7100
 * Callers:
 *     NtQueryInformationProcess @ 0x1405D17E0 (NtQueryInformationProcess.c)
 *     PspAllocateProcess @ 0x140681A9C (PspAllocateProcess.c)
 *     AlpcpMapLegacyPortView @ 0x1406C6E38 (AlpcpMapLegacyPortView.c)
 *     NtQuerySection @ 0x1406C6FD0 (NtQuerySection.c)
 *     PspLocateSystemDll @ 0x14075FCC0 (PspLocateSystemDll.c)
 *     DbgkpSendErrorMessage @ 0x140849EA8 (DbgkpSendErrorMessage.c)
 * Callees:
 *     MiSectionControlArea @ 0x140071A50 (MiSectionControlArea.c)
 *     MiAweControlArea @ 0x140072924 (MiAweControlArea.c)
 *     MiGetControlAreaLoadConfig @ 0x140097C20 (MiGetControlAreaLoadConfig.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

__int64 __fastcall MmGetSectionInformation(__int64 a1, int a2, __int64 a3)
{
  unsigned __int64 v6; // rax
  int v7; // r8d
  int v8; // r9d
  __int64 v9; // r10
  __int64 v10; // r11
  __int128 *v11; // rcx
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm2
  __int128 v15; // xmm3
  __int64 v16; // rdx
  __int64 v17; // rdx
  _BYTE *ControlAreaLoadConfig; // rax
  int v19; // edx
  bool v20; // zf
  int v21; // eax
  int v23; // r8d
  int v24; // edx
  int v25; // ecx
  int v26; // edx
  __int16 v27; // cx
  int v28; // eax
  _OWORD v29[5]; // [rsp+30h] [rbp-58h] BYREF

  memset(v29, 0, 0x48uLL);
  v6 = MiSectionControlArea(a1);
  if ( !MiAweControlArea(v6) )
  {
    if ( !a2 )
    {
      v23 = ((v8 & 0x1000) << 14) | 0x8000000;
      if ( (v8 & 0x2000) == 0 )
        v23 = (v8 & 0x1000) << 14;
      if ( (v8 & 0x20) != 0 )
        v23 = 0x1000000;
      v24 = v23 | 0x200000;
      if ( (v8 & 0x40) == 0 )
        v24 = v23;
      v25 = v24 | 0x800000;
      if ( (v8 & 0x80u) == 0 )
        v25 = v24;
      v26 = v25 | 0x80000;
      if ( v8 >= 0 )
        v26 = v25;
      v27 = *(_WORD *)(*(_QWORD *)v10 + 12LL);
      v28 = v26 | 0x10000000;
      if ( v27 >= 0 )
        v28 = v26;
      v7 = v28 | 0x40000000;
      if ( (v27 & 0x4000) == 0 )
        v7 = v28;
      if ( (*(_DWORD *)(v10 + 56) & 0x20020) == 0x20020 )
        v7 |= 0x20000000u;
    }
    if ( a2 )
    {
      if ( a2 == 1 || a2 == 4 )
      {
        if ( (v8 & 0x20) != 0 )
        {
          v11 = *(__int128 **)(*(_QWORD *)v10 + 56LL);
          v12 = *v11;
          v29[0] = *v11;
          v13 = v11[1];
          v14 = v11[2];
          v15 = v11[3];
          if ( (*(_DWORD *)(v10 + 56) & 0x10000000) != 0 )
          {
            *(_QWORD *)&v29[0] = qword_1404656E8 | LOWORD(v29[0]);
            v12 = v29[0];
          }
          if ( a2 == 4 )
          {
            ControlAreaLoadConfig = (_BYTE *)MiGetControlAreaLoadConfig(v10);
            LODWORD(v29[4]) = v9;
            if ( ControlAreaLoadConfig )
            {
              v20 = (*ControlAreaLoadConfig & 0x10) == 0;
              v21 = v9;
              if ( !v20 )
                v21 = v19;
              LODWORD(v29[4]) = v21;
            }
            *(_OWORD *)a3 = v12;
            *(_OWORD *)(a3 + 16) = v13;
            *(_OWORD *)(a3 + 32) = v14;
            *(_OWORD *)(a3 + 48) = v15;
            *(_QWORD *)(a3 + 64) = *(_QWORD *)&v29[4];
          }
          else
          {
            *(_OWORD *)a3 = v12;
            *(_OWORD *)(a3 + 16) = v13;
            *(_OWORD *)(a3 + 32) = v14;
            *(_OWORD *)(a3 + 48) = v15;
          }
          return (unsigned int)v9;
        }
      }
      else if ( (v8 & 0x20) != 0 )
      {
        v16 = *(_QWORD *)(*(_QWORD *)(v10 + 96) + 32LL);
        if ( v16 )
          v17 = *(_QWORD *)(v16 + 40);
        else
          v17 = v9;
        if ( a2 == 2 )
        {
          if ( (*(_DWORD *)(v10 + 56) & 0x10000000) != 0 )
            v17 += qword_1404656E8 - *(_QWORD *)(*(_QWORD *)v10 + 32LL);
          *(_QWORD *)a3 = v17;
        }
        else
        {
          *(_QWORD *)a3 = *(_QWORD *)(*(_QWORD *)v10 + 32LL) - v17;
        }
        return (unsigned int)v9;
      }
      LODWORD(v9) = -1073741751;
    }
    else
    {
      *(_QWORD *)a3 = *(_QWORD *)(a1 + 24) << 12;
      *(_QWORD *)(a3 + 16) = *(_QWORD *)(a1 + 48);
      *(_DWORD *)(a3 + 8) = v7;
    }
    return (unsigned int)v9;
  }
  return 3221225485LL;
}
