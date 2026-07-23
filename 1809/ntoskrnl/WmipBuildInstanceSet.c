/*
 * XREFs of WmipBuildInstanceSet @ 0x140708B88
 * Callers:
 *     WmipAddDataSource @ 0x140708870 (WmipAddDataSource.c)
 *     WmipUpdateAddGuid @ 0x1408B5A2C (WmipUpdateAddGuid.c)
 *     WmipUpdateModifyGuid @ 0x1408B5E54 (WmipUpdateModifyGuid.c)
 * Callees:
 *     RtlStringCchCopyNW @ 0x1400F5114 (RtlStringCchCopyNW.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     WmipValidateWmiRegInfoString @ 0x140708FE8 (WmipValidateWmiRegInfoString.c)
 *     WmipDetermineInstanceBaseIndex @ 0x140709020 (WmipDetermineInstanceBaseIndex.c)
 *     WmipMangleInstanceName @ 0x1407096A0 (WmipMangleInstanceName.c)
 */

__int64 __fastcall WmipBuildInstanceSet(_DWORD *a1, __int64 a2, unsigned int a3, __int64 a4, int a5)
{
  __int64 v5; // r12
  unsigned int v6; // r10d
  unsigned int v9; // eax
  wchar_t *v11; // r15
  int v12; // ecx
  __int64 v13; // r11
  unsigned __int16 *v14; // rbx
  unsigned int v15; // ebx
  unsigned __int16 *v17; // rsi
  size_t v18; // r14
  PVOID PoolWithTag; // rax
  _DWORD *v20; // r12
  int v21; // ecx
  SIZE_T v22; // r15
  unsigned __int64 v23; // r14
  int v24; // esi
  unsigned __int64 v25; // r11
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rax
  bool v29; // cf
  unsigned __int64 v30; // rcx
  __int64 v31; // rax
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // rcx
  int v34; // eax
  _QWORD *v35; // rax
  unsigned int v36; // r13d
  _QWORD *v37; // rsi
  _QWORD *v38; // rdi
  size_t v39; // rcx
  unsigned __int16 *v40; // rax
  size_t v41; // r14
  __int64 v42; // rax
  unsigned __int16 *v43; // [rsp+70h] [rbp+8h] BYREF
  size_t v44; // [rsp+78h] [rbp+10h]
  unsigned int v45; // [rsp+80h] [rbp+18h]
  unsigned __int16 *v46; // [rsp+88h] [rbp+20h]

  v45 = a3;
  v5 = (unsigned int)a1[5];
  v6 = a3;
  *(_DWORD *)(a4 + 80) = a5;
  v9 = *(_DWORD *)(a4 + 16) & 0xFFFD7FF8;
  *(_DWORD *)(a4 + 72) = v5;
  *(_DWORD *)(a4 + 16) = v9;
  *(_DWORD *)(a4 + 76) = 0;
  v11 = 0LL;
  v12 = a1[4];
  v43 = 0LL;
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
  v46 = (unsigned __int16 *)(v13 + a2);
  if ( (v12 & 4) == 0 )
  {
    if ( (v12 & 8) == 0 )
      goto LABEL_8;
    if ( (int)WmipValidateWmiRegInfoString(a2, a3, (unsigned int)v13, &v43) >= 0 )
    {
      v17 = v43;
      if ( v43 )
      {
        v18 = (unsigned __int64)*v43 >> 1;
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
  v24 = 0;
  if ( (_DWORD)v5 )
  {
    while ( 1 )
    {
      v43 = 0LL;
      if ( (int)WmipValidateWmiRegInfoString(a2, v6, (unsigned int)v13, &v43) < 0 || !v43 )
        return (unsigned int)-1073741811;
      v26 = (unsigned __int64)*v43 >> 1;
      v27 = v26;
      if ( v26 <= v23 )
        v27 = v23;
      v23 = v27;
      v28 = v26 + 1;
      v22 += 2 * v26 + 22;
      v29 = v26 == -1LL;
      v30 = -1LL;
      if ( !v29 )
        v30 = v28;
      v15 = v29 ? 0xC0000095 : 0;
      if ( !v28 )
        return v15;
      v31 = 2 * v30;
      if ( !is_mul_ok(v30, 2uLL) )
        return (unsigned int)-1073741675;
      v32 = v31 + v25;
      v33 = v25;
      v29 = v31 + v25 < v25;
      v34 = -1;
      if ( !v29 )
        v34 = v32;
      LODWORD(v13) = v34;
      v15 = v32 < v33 ? 0xC0000095 : 0;
      if ( v32 < v33 )
        return v15;
      v6 = v45;
      if ( ++v24 >= (unsigned int)v5 )
      {
        v14 = v46;
        break;
      }
    }
  }
  v35 = ExAllocatePoolWithTag(PagedPool, v22, 0x70696D57u);
  v36 = 0;
  v37 = v35;
  if ( !v35 )
    return (unsigned int)-1073741670;
  *(_DWORD *)(a4 + 16) |= 2u;
  *(_QWORD *)(a4 + 88) = v35;
  v11 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 2 * v23 + 2, 0x70696D57u);
  if ( !v11 )
    return (unsigned int)-1073741670;
  v38 = &v37[v5];
  if ( (_DWORD)v5 )
  {
    v39 = v23 + 1;
    v40 = v14;
    v44 = v23 + 1;
    do
    {
      *v37 = v38;
      v41 = (unsigned __int64)*v14 >> 1;
      v43 = v40 + 1;
      RtlStringCchCopyNW(v11, v39, v40 + 1, v41);
      v15 = WmipMangleInstanceName(a1, v11, v41 + 7, v38);
      if ( (v15 & 0x80000000) != 0 )
        goto LABEL_9;
      v42 = -1LL;
      do
        ++v42;
      while ( *((_WORD *)v38 + v42) );
      v39 = v44;
      v38 = (_QWORD *)((char *)v38 + 2 * v42 + 2);
      ++v36;
      ++v37;
      v14 = &v43[v41];
      v40 = v14;
    }
    while ( v36 < (unsigned int)v5 );
  }
LABEL_8:
  v15 = 0;
LABEL_9:
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  return v15;
}
