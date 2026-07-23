/*
 * XREFs of HvlSetupLiveDumpBuffer @ 0x14027A8F4
 * Callers:
 *     HvlPrepareLivedumpDescriptor @ 0x140277CB8 (HvlPrepareLivedumpDescriptor.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1401211A0 (MmGetPhysicalAddress.c)
 */

__int64 __fastcall HvlSetupLiveDumpBuffer(
        _QWORD *a1,
        unsigned int a2,
        unsigned int a3,
        _QWORD *a4,
        unsigned __int64 *a5,
        _QWORD *a6)
{
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // r8
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r8
  __int64 v16; // r15
  unsigned __int64 v17; // r12
  PHYSICAL_ADDRESS **v18; // rcx
  PHYSICAL_ADDRESS *v19; // r14
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  _QWORD *v21; // r8
  unsigned __int64 v22; // rax
  char *v23; // r15
  unsigned __int64 v24; // rdi
  unsigned __int64 v25; // rsi
  unsigned __int64 v26; // rdx
  PHYSICAL_ADDRESS **v27; // rcx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // r13
  PHYSICAL_ADDRESS *v30; // rbx
  unsigned __int64 v31; // r12
  unsigned __int64 v32; // r15
  char *v33; // r14
  PHYSICAL_ADDRESS **v34; // r12
  void **v35; // rsi
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // r14
  PHYSICAL_ADDRESS *v38; // rdi
  unsigned __int64 v39; // r15
  char **v40; // r13
  char *v41; // rbx
  void **v42; // [rsp+20h] [rbp-78h]
  unsigned __int64 v43; // [rsp+28h] [rbp-70h]
  unsigned __int64 v44; // [rsp+30h] [rbp-68h]
  unsigned __int64 v45; // [rsp+48h] [rbp-50h]
  PHYSICAL_ADDRESS **v46; // [rsp+50h] [rbp-48h]
  unsigned __int64 v47; // [rsp+58h] [rbp-40h]
  __int64 v48; // [rsp+60h] [rbp-38h]
  unsigned __int64 v50; // [rsp+D0h] [rbp+38h]
  PHYSICAL_ADDRESS **v51; // [rsp+D0h] [rbp+38h]

  v6 = a3;
  v7 = a3 * (unsigned __int64)a2;
  if ( v7 < 5 )
    return 3221225507LL;
  v9 = v7 - 2;
  v10 = v9 / 0x40201;
  if ( v9 / 0x40201 >= 0x200 )
    v10 = 512LL;
  v11 = v10 << 9;
  v43 = v10 << 9;
  v12 = v10 << 18;
  v50 = v10 << 18;
  v13 = v9 - 262657 * v10;
  if ( v13 >= 3 && v10 < 0x200 )
  {
    v14 = v13 - 1;
    ++v10;
    v11 += v14 / 0x201;
    v12 += (v14 / 0x201) << 9;
    v43 = v11;
    v50 = v12;
    v15 = v14 % 0x201;
    if ( v15 >= 2 )
    {
      ++v11;
      v12 = v15 + v12 - 1;
      v43 = v11;
      v50 = v12;
    }
  }
  v16 = *a1;
  v45 = v10 + 2;
  *a4 = v10 + 2;
  v47 = v10 + 2 + v11;
  *(_DWORD *)(v16 + 8) = 3;
  *(_QWORD *)v16 = v12;
  *a5 = v47;
  v48 = v16;
  v17 = 1 % v6;
  v18 = (PHYSICAL_ADDRESS **)&a1[1 / v6];
  v19 = &(*v18)[512 * (1 % v6)];
  v46 = v18;
  PhysicalAddress = MmGetPhysicalAddress(v19);
  v21 = a1;
  *(_QWORD *)(v16 + 16) = (unsigned __int64)PhysicalAddress.QuadPart >> 12;
  v22 = 2 / v6;
  v44 = 2 % v6;
  v23 = (char *)(a1[2 / v6] + ((2 % v6) << 12));
  v42 = (void **)&a1[2 / v6];
  if ( v10 )
  {
    v24 = 0LL;
    v25 = 2 % v6;
    do
    {
      *v19 = MmGetPhysicalAddress(v23);
      v23 += 4096;
      ++v19;
      if ( (++v24 & 0x1FF) == 0 && !(++v17 % v6) )
      {
        ++v46;
        v17 = 0LL;
        v19 = *v46;
      }
      v26 = (v25 + 1) % v6;
      if ( !v26 )
        v23 = (char *)*++v42;
      v25 = (v25 + 1) & -(__int64)(v26 != 0);
    }
    while ( v24 < v10 );
    v11 = v43;
    v12 = v50;
    v21 = a1;
    v22 = 2 / v6;
  }
  v27 = (PHYSICAL_ADDRESS **)&v21[v22];
  v28 = v45 / v6;
  v29 = 0LL;
  v30 = &(*v27)[512 * (2 % v6)];
  v31 = v45 % v6;
  v32 = v45 % v6;
  v33 = (char *)(v21[v45 / v6] + ((v45 % v6) << 12));
  if ( v11 )
  {
    v34 = v27;
    v35 = (void **)&v21[v45 / v6];
    do
    {
      *v30 = MmGetPhysicalAddress(v33);
      v33 += 4096;
      ++v30;
      if ( (++v29 & 0x1FF) == 0 && !(++v44 % v6) )
      {
        ++v34;
        v44 = 0LL;
        v30 = *v34;
      }
      v36 = (v32 + 1) % v6;
      if ( !v36 )
        v33 = (char *)*++v35;
      v32 = (v32 + 1) & -(__int64)(v36 != 0);
    }
    while ( v29 < v11 );
    v12 = v50;
    v31 = v45 % v6;
    v21 = a1;
    v28 = v45 / v6;
  }
  v37 = 0LL;
  v38 = (PHYSICAL_ADDRESS *)(v21[v28] + (v31 << 12));
  v39 = v47 % v6;
  v51 = (PHYSICAL_ADDRESS **)&v21[v28];
  v40 = (char **)&v21[v47 / v6];
  v41 = &(*v40)[4096 * (v47 % v6)];
  while ( v37 < v12 )
  {
    *v38 = MmGetPhysicalAddress(v41);
    v41 += 4096;
    ++v38;
    if ( (++v37 & 0x1FF) == 0 && !(++v31 % v6) )
    {
      ++v51;
      v31 = 0LL;
      v38 = *v51;
    }
    if ( !(++v39 % v6) )
    {
      if ( v37 >= v12 )
        break;
      ++v40;
      v39 = 0LL;
      v41 = *v40;
    }
  }
  *a6 = v48;
  return 0LL;
}
