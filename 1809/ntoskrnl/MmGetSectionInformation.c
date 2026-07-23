/*
 * XREFs of MmGetSectionInformation @ 0x14066EA10
 * Callers:
 *     AlpcpMapLegacyPortView @ 0x14061DCE4 (AlpcpMapLegacyPortView.c)
 *     PspAllocateProcess @ 0x14064CE78 (PspAllocateProcess.c)
 *     NtQueryInformationProcess @ 0x14066ED30 (NtQueryInformationProcess.c)
 *     NtQuerySection @ 0x1406B7380 (NtQuerySection.c)
 *     PspLocateSystemDll @ 0x14075732C (PspLocateSystemDll.c)
 *     DbgkpSendErrorMessage @ 0x140811FCC (DbgkpSendErrorMessage.c)
 * Callees:
 *     MiSectionControlArea @ 0x140075E60 (MiSectionControlArea.c)
 *     MiAweControlArea @ 0x140077E5C (MiAweControlArea.c)
 *     MiGetControlAreaLoadConfig @ 0x1400D9594 (MiGetControlAreaLoadConfig.c)
 */

__int64 __fastcall MmGetSectionInformation(__int64 a1, int a2)
{
  int v4; // esi
  unsigned __int64 v5; // rax
  int v6; // r8d
  __int64 v7; // r9
  __int64 v8; // r10
  __int64 v9; // r11
  __int128 *v10; // rcx
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm2
  __int128 v14; // xmm3
  __int64 v15; // rdx
  __int64 v16; // rdx
  _BYTE *ControlAreaLoadConfig; // rax
  int v18; // edx
  __int64 v19; // r10
  bool v20; // zf
  int v21; // eax
  int v23; // r8d
  int v24; // edx
  int v25; // ecx
  int v26; // edx
  __int16 v27; // cx
  int v28; // eax
  __int128 v29; // [rsp+30h] [rbp-58h]
  __int64 v30; // [rsp+70h] [rbp-18h]

  v4 = *(_DWORD *)(a1 + 56);
  v5 = MiSectionControlArea(a1);
  if ( !MiAweControlArea(v5) )
  {
    if ( !a2 )
    {
      v23 = ((v4 & 0x1000) << 14) | 0x8000000;
      if ( (v4 & 0x2000) == 0 )
        v23 = (v4 & 0x1000) << 14;
      if ( (v4 & 0x20) != 0 )
        v23 = 0x1000000;
      v24 = v23 | 0x200000;
      if ( (v4 & 0x40) == 0 )
        v24 = v23;
      v25 = v24 | 0x800000;
      if ( (v4 & 0x80u) == 0 )
        v25 = v24;
      v26 = v25 | 0x80000;
      if ( v4 >= 0 )
        v26 = v25;
      v27 = *(_WORD *)(*(_QWORD *)v9 + 12LL);
      v28 = v26 | 0x10000000;
      if ( v27 >= 0 )
        v28 = v26;
      v6 = v28 | 0x40000000;
      if ( (v27 & 0x4000) == 0 )
        v6 = v28;
      if ( (*(_DWORD *)(v9 + 56) & 0x20020) == 0x20020 )
        v6 |= 0x20000000u;
    }
    if ( a2 )
    {
      if ( a2 == 1 || a2 == 4 )
      {
        if ( (v4 & 0x20) != 0 )
        {
          v10 = *(__int128 **)(*(_QWORD *)v9 + 56LL);
          v11 = *v10;
          v29 = *v10;
          v12 = v10[1];
          v13 = v10[2];
          v14 = v10[3];
          if ( (*(_DWORD *)(v9 + 56) & 0x10000000) != 0 )
          {
            *(_QWORD *)&v29 = qword_14043B090 | (unsigned __int16)v29;
            v11 = v29;
          }
          if ( a2 == 4 )
          {
            ControlAreaLoadConfig = (_BYTE *)MiGetControlAreaLoadConfig(v9);
            LODWORD(v30) = v7;
            if ( ControlAreaLoadConfig )
            {
              v20 = (*ControlAreaLoadConfig & 0x10) == 0;
              v21 = v7;
              if ( !v20 )
                v21 = v18;
              LODWORD(v30) = v21;
            }
            *(_OWORD *)v19 = v11;
            *(_OWORD *)(v19 + 16) = v12;
            *(_OWORD *)(v19 + 32) = v13;
            *(_OWORD *)(v19 + 48) = v14;
            *(_QWORD *)(v19 + 64) = v30;
          }
          else
          {
            *(_OWORD *)v8 = v11;
            *(_OWORD *)(v8 + 16) = v12;
            *(_OWORD *)(v8 + 32) = v13;
            *(_OWORD *)(v8 + 48) = v14;
          }
          return (unsigned int)v7;
        }
      }
      else if ( (v4 & 0x20) != 0 )
      {
        v15 = *(_QWORD *)(*(_QWORD *)(v9 + 96) + 32LL);
        if ( v15 )
          v16 = *(_QWORD *)(v15 + 40);
        else
          v16 = v7;
        if ( a2 == 2 )
        {
          if ( (*(_DWORD *)(v9 + 56) & 0x10000000) != 0 )
            v16 += qword_14043B090 - *(_QWORD *)(*(_QWORD *)v9 + 32LL);
          *(_QWORD *)v8 = v16;
        }
        else
        {
          *(_QWORD *)v8 = *(_QWORD *)(*(_QWORD *)v9 + 32LL) - v16;
        }
        return (unsigned int)v7;
      }
      LODWORD(v7) = -1073741751;
    }
    else
    {
      *(_QWORD *)v8 = *(_QWORD *)(a1 + 24) << 12;
      *(_QWORD *)(v8 + 16) = *(_QWORD *)(a1 + 48);
      *(_DWORD *)(v8 + 8) = v6;
    }
    return (unsigned int)v7;
  }
  return 3221225485LL;
}
