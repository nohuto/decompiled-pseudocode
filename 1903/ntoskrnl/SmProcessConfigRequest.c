/*
 * XREFs of SmProcessConfigRequest @ 0x1407859CC
 * Callers:
 *     SmSetStoreInformation @ 0x1406EB974 (SmSetStoreInformation.c)
 * Callees:
 *     SeSinglePrivilegeCheck @ 0x140672D30 (SeSinglePrivilegeCheck.c)
 *     SmpSystemStoreCreate @ 0x140785AEC (SmpSystemStoreCreate.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913EC0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SmProcessConfigRequest(unsigned __int64 a1, int a2, KPROCESSOR_MODE a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  unsigned __int64 v6; // rax
  unsigned int v7; // ecx
  unsigned __int64 v8; // rax
  unsigned int v9; // edi
  unsigned int v10; // ecx
  unsigned int v11; // eax
  int v12; // edi
  __int64 v13; // rcx
  unsigned int v15; // ecx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  unsigned __int8 v18; // [rsp+58h] [rbp+20h]

  v4 = 0;
  if ( a2 != 8 )
    return (unsigned int)-1073741306;
  if ( a3 )
  {
    if ( (a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v5 = 0x7FFFFFFF0000LL;
    if ( a1 < 0x7FFFFFFF0000LL )
      v5 = a1;
    *(_BYTE *)v5 = *(_BYTE *)v5;
    *(_BYTE *)(v5 + 7) = *(_BYTE *)(v5 + 7);
  }
  v6 = *(_QWORD *)a1;
  if ( (unsigned __int8)*(_QWORD *)a1 != 4 )
    return (unsigned int)-1073741735;
  if ( (v6 & 0xFFFF00) != 0 )
    return (unsigned int)-1073741811;
  v7 = BYTE3(v6);
  if ( BYTE3(v6) >= 3u )
    return (unsigned int)-1073741811;
  if ( v7 )
  {
    v15 = v7 - 1;
    if ( v15 )
    {
      if ( v15 != 1 )
        return v4;
      v16 = HIDWORD(v6);
      if ( (unsigned int)(v16 - 4) <= 0x1C && (((_DWORD)v16 - 1) & (unsigned int)v16) == 0 )
      {
        dword_1404667FC = v16;
        return v4;
      }
    }
    else
    {
      v17 = HIDWORD(v6);
      if ( (unsigned int)v17 <= 1 )
      {
        PspOutSwapSharedPages = v17;
        return v4;
      }
    }
    return (unsigned int)-1073741811;
  }
  v8 = HIDWORD(v6);
  v18 = v8;
  if ( (v8 & 0xFFFFFF00) != 0 )
    return (unsigned int)-1073741811;
  v9 = (unsigned int)v8 >> 2;
  v10 = ((unsigned int)v8 >> 2) & 3;
  if ( v10 == 3 )
    return (unsigned int)-1073741811;
  v11 = ((unsigned int)v8 >> 4) & 3;
  if ( v11 >= 3 )
    return (unsigned int)-1073741811;
  if ( (v10 == 2 || v11 == 2) && !SeSinglePrivilegeCheck(SeLockMemoryPrivilege, a3) )
  {
    return (unsigned int)-1073741790;
  }
  else
  {
    v12 = v9 & 0xF;
    v13 = v18 & 0xC0;
    dword_14058C180 = v13 | dword_14058C180 & 0xFFFFFF00 | v12 | (16 * (v18 & 3));
    if ( (v12 & 3) != 0 )
      SmpSystemStoreCreate(v13);
  }
  return v4;
}
