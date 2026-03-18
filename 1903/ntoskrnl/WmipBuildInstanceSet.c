/*
 * XREFs of WmipBuildInstanceSet @ 0x140732824
 * Callers:
 *     WmipAddDataSource @ 0x140732528 (WmipAddDataSource.c)
 *     WmipUpdateModifyGuid @ 0x14077B338 (WmipUpdateModifyGuid.c)
 *     WmipUpdateAddGuid @ 0x1408F1B44 (WmipUpdateAddGuid.c)
 * Callees:
 *     RtlStringCchCopyNW @ 0x140153FE8 (RtlStringCchCopyNW.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     WmipValidateWmiRegInfoString @ 0x140732C48 (WmipValidateWmiRegInfoString.c)
 *     WmipDetermineInstanceBaseIndex @ 0x140732C80 (WmipDetermineInstanceBaseIndex.c)
 *     WmipMangleInstanceName @ 0x1407332E8 (WmipMangleInstanceName.c)
 */

__int64 __fastcall WmipBuildInstanceSet(_DWORD *a1, __int64 a2, unsigned int a3, __int64 a4, int a5)
{
  __int64 v5; // rbp
  unsigned int v6; // r10d
  unsigned int v9; // eax
  wchar_t *v11; // r15
  int v12; // ecx
  unsigned __int64 v13; // r11
  unsigned __int16 *v14; // r13
  int v15; // ebx
  unsigned __int16 *v17; // rsi
  size_t v18; // rbp
  PVOID PoolWithTag; // rax
  _DWORD *v20; // r12
  int v21; // ecx
  SIZE_T v22; // r15
  unsigned __int64 v23; // rbx
  unsigned int i; // esi
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rcx
  _QWORD *v28; // rax
  _QWORD *v29; // rsi
  _QWORD *v30; // rdi
  unsigned int v31; // r12d
  size_t v32; // rcx
  unsigned __int16 *v33; // rax
  size_t v34; // r13
  __int64 v35; // rax
  unsigned __int16 *v36; // [rsp+60h] [rbp+8h] BYREF
  size_t v37; // [rsp+68h] [rbp+10h]
  unsigned int v38; // [rsp+70h] [rbp+18h]

  v38 = a3;
  v5 = (unsigned int)a1[5];
  v6 = a3;
  *(_DWORD *)(a4 + 80) = a5;
  v9 = *(_DWORD *)(a4 + 16) & 0xFFFD7FF8;
  *(_DWORD *)(a4 + 72) = v5;
  *(_DWORD *)(a4 + 16) = v9;
  *(_DWORD *)(a4 + 76) = 0;
  v11 = 0LL;
  v12 = a1[4];
  v36 = 0LL;
  if ( (v12 & 1) != 0 )
  {
    v9 |= 4u;
    *(_DWORD *)(a4 + 16) = v9;
    v12 = a1[4];
  }
  if ( (v12 & 0x80000) != 0 )
  {
    v9 |= 0x1000u;
    *(_DWORD *)(a4 + 16) = v9;
    v12 = a1[4];
    if ( (v12 & 0x1000) != 0 )
    {
      v9 |= 0x80000u;
      *(_DWORD *)(a4 + 16) = v9;
      v12 = a1[4];
    }
  }
  if ( (v12 & 0x40) != 0 )
  {
    *(_DWORD *)(a4 + 16) = v9 | 0x8000;
    v12 = a1[4];
  }
  v13 = (unsigned int)a1[6];
  v14 = (unsigned __int16 *)(v13 + a2);
  if ( (v12 & 4) == 0 )
  {
    if ( (v12 & 8) == 0 )
      goto LABEL_8;
    if ( (int)WmipValidateWmiRegInfoString(a2, a3, (unsigned int)v13, &v36) >= 0 )
    {
      v17 = v36;
      if ( v36 )
      {
        v18 = (unsigned __int64)*v36 >> 1;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 2 * v18 + 6, 0x70696D57u);
        v20 = PoolWithTag;
        if ( PoolWithTag )
        {
          RtlStringCchCopyNW((NTSTRSAFE_PWSTR)PoolWithTag + 2, v18 + 1, v17 + 1, v18);
          *v20 = WmipDetermineInstanceBaseIndex(a1, v20 + 1);
          v21 = *(_DWORD *)(a4 + 16) | 1;
          *(_QWORD *)(a4 + 88) = v20;
          *(_DWORD *)(a4 + 16) = v21;
          if ( (a1[4] & 0x20) != 0 )
            *(_DWORD *)(a4 + 16) = v21 | 0x20000;
          goto LABEL_8;
        }
        return (unsigned int)-1073741670;
      }
    }
    return (unsigned int)-1073741811;
  }
  v22 = 1LL;
  v23 = 0LL;
  for ( i = 0; i < (unsigned int)v5; LODWORD(v13) = v13 + 2 * v27 )
  {
    v36 = 0LL;
    if ( (int)WmipValidateWmiRegInfoString(a2, v6, (unsigned int)v13, &v36) < 0 || !v36 )
      return (unsigned int)-1073741811;
    v25 = (unsigned __int64)*v36 >> 1;
    v26 = v25;
    if ( v25 <= v23 )
      v26 = v23;
    v23 = v26;
    v22 += 2 * v25 + 22;
    v27 = v25 + 1;
    if ( !v27 || !is_mul_ok(v27, 2uLL) || v13 + 2 * v27 < v13 )
      return (unsigned int)-1073741675;
    v6 = v38;
    ++i;
  }
  v28 = ExAllocatePoolWithTag(PagedPool, v22, 0x70696D57u);
  v29 = v28;
  if ( !v28 )
    return (unsigned int)-1073741670;
  *(_DWORD *)(a4 + 16) |= 2u;
  *(_QWORD *)(a4 + 88) = v28;
  v11 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 2 * v23 + 2, 0x70696D57u);
  if ( !v11 )
    return (unsigned int)-1073741670;
  v30 = &v29[v5];
  v31 = 0;
  if ( (_DWORD)v5 )
  {
    v32 = v23 + 1;
    v33 = v14;
    v37 = v23 + 1;
    do
    {
      *v29 = v30;
      v34 = (unsigned __int64)*v14 >> 1;
      v36 = v33 + 1;
      RtlStringCchCopyNW(v11, v32, v33 + 1, v34);
      v15 = WmipMangleInstanceName(a1, v11, v34 + 7, v30);
      if ( v15 < 0 )
        goto LABEL_9;
      v35 = -1LL;
      do
        ++v35;
      while ( *((_WORD *)v30 + v35) );
      v32 = v37;
      v30 = (_QWORD *)((char *)v30 + 2 * v35 + 2);
      ++v31;
      ++v29;
      v14 = &v36[v34];
      v33 = v14;
    }
    while ( v31 < (unsigned int)v5 );
  }
LABEL_8:
  v15 = 0;
LABEL_9:
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  return (unsigned int)v15;
}
