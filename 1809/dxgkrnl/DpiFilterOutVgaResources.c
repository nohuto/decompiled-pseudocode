/*
 * XREFs of DpiFilterOutVgaResources @ 0x1C015AB20
 * Callers:
 *     DpiFdoHandleStartDevice @ 0x1C0151AF0 (DpiFdoHandleStartDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     DpiDetermineResourceListSize @ 0x1C015AD10 (DpiDetermineResourceListSize.c)
 */

__int64 __fastcall DpiFilterOutVgaResources(__int64 a1, _DWORD *a2, _QWORD *a3, char a4)
{
  unsigned int v4; // esi
  __int64 (__fastcall *v8)(_QWORD, __int64, __int64, int *, __int64 *); // rax
  char v9; // al
  __int64 v10; // rcx
  bool v11; // zf
  __int64 (__fastcall *v12)(_QWORD, __int64, __int64, int *, __int64 *); // rax
  char v13; // al
  __int64 v14; // rcx
  __int64 (__fastcall *v15)(_QWORD, __int64, __int64, int *, __int64 *); // rax
  char v16; // al
  __int64 v17; // rcx
  unsigned int v18; // r14d
  unsigned int v19; // r15d
  _DWORD *PoolWithTagPriority; // rax
  _DWORD *v21; // rbx
  unsigned int v22; // r9d
  unsigned int v23; // r8d
  _DWORD *v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v29; // [rsp+30h] [rbp-10h] BYREF
  __int64 v30; // [rsp+88h] [rbp+48h] BYREF
  __int64 v31; // [rsp+90h] [rbp+50h] BYREF
  int v32; // [rsp+98h] [rbp+58h] BYREF

  v4 = 0;
  v30 = 944LL;
  v29 = 655360LL;
  v31 = 960LL;
  if ( a4 == 1 )
  {
    v8 = *(__int64 (__fastcall **)(_QWORD, __int64, __int64, int *, __int64 *))(a1 + 592);
    if ( v8 )
    {
      v32 = 0;
      v9 = v8(*(_QWORD *)(a1 + 568), 655360LL, 0x20000LL, &v32, &v29);
      v10 = v29;
      v11 = v9 == 0;
      v32 = 1;
      v12 = *(__int64 (__fastcall **)(_QWORD, __int64, __int64, int *, __int64 *))(a1 + 592);
      if ( v11 )
        v10 = 655360LL;
      v29 = v10;
      v13 = v12(*(_QWORD *)(a1 + 568), v30, 12LL, &v32, &v30);
      v14 = v30;
      v11 = v13 == 0;
      v32 = 1;
      v15 = *(__int64 (__fastcall **)(_QWORD, __int64, __int64, int *, __int64 *))(a1 + 592);
      if ( v11 )
        v14 = 944LL;
      v30 = v14;
      v16 = v15(*(_QWORD *)(a1 + 568), v31, 32LL, &v32, &v31);
      v17 = v31;
      if ( !v16 )
        v17 = 960LL;
      v31 = v17;
    }
  }
  v18 = a2[4];
  DpiDetermineResourceListSize(a2, &v32);
  v19 = v32 - 60;
  PoolWithTagPriority = ExAllocatePoolWithTagPriority(
                          PagedPool,
                          (unsigned int)(v32 - 60),
                          0x74727044u,
                          HighPoolPriority);
  v21 = PoolWithTagPriority;
  if ( PoolWithTagPriority )
  {
    memset(PoolWithTagPriority, 0, v19);
    *v21 = 1;
    v22 = 0;
    v23 = 0;
    v21[1] = a2[1];
    v21[2] = a2[2];
    v21[3] = 65537;
    v21[4] = v18 - 3;
    if ( v18 )
    {
      v24 = a2 + 5;
      do
      {
        v25 = *(_QWORD *)(v24 + 1);
        if ( v25 != v29 && v25 != v30 && v25 != v31 )
        {
          if ( v23 == v18 - 3 )
          {
            v4 = -1073741823;
            ExFreePoolWithTag(v21, 0);
            v21 = 0LL;
            break;
          }
          v26 = ++v23;
          v27 = 5 * v26;
          *(_OWORD *)&v21[v27] = *(_OWORD *)v24;
          v21[v27 + 4] = v24[4];
        }
        ++v22;
        v24 += 5;
      }
      while ( v22 < v18 );
    }
  }
  else
  {
    v4 = -1073741801;
  }
  *a3 = v21;
  return v4;
}
