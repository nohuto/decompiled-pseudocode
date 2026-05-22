/*
 * XREFs of ?GetSpatialInputActivationPolicyFromInputSites@DWMInputRouter@@AEAA?AW4SPATIAL_INPUT_ACTIVATION_POLICY@@AEBV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18008A8CC
 * Callers:
 *     ?HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z @ 0x18008A720 (-HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DWMInputRouter::GetSpatialInputActivationPolicyFromInputSites(__int64 a1, __int64 **a2)
{
  unsigned int v2; // ebx
  int v3; // edi
  int v4; // esi
  __int64 *v5; // r14
  __int64 *v6; // r12
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rbp
  __int64 v10; // r15
  __int64 result; // rax
  __int64 v12; // [rsp+60h] [rbp+8h] BYREF

  v12 = a1;
  v2 = 0;
  v3 = 0;
  v4 = 0;
  v5 = *a2;
  v6 = a2[1];
  if ( *a2 == v6 )
    goto LABEL_23;
  while ( 1 )
  {
    v7 = *v5;
    v8 = 0LL;
    v12 = 0LL;
    v9 = *(_QWORD *)(v7 + 392);
    v10 = *(_QWORD *)(v7 + 400);
    if ( v9 != v10 )
    {
      while ( 1 )
      {
        if ( v8 )
        {
          v12 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
        }
        if ( (***(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(v9 + 8))(
               *(_QWORD *)(v9 + 8),
               &GUID_4753c172_9138_4064_8603_1556e98a010f,
               &v12) >= 0 )
          break;
        v9 += 16LL;
        if ( v9 == v10 )
          break;
        v8 = v12;
      }
      v8 = v12;
    }
    if ( v8 )
    {
      if ( !v3 )
      {
        v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 24LL))(v8);
        v8 = v12;
      }
      if ( !v4 )
      {
        v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 32LL))(v8);
        v8 = v12;
      }
      if ( v3 && v4 )
        break;
    }
    if ( v8 )
    {
      v12 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    if ( ++v5 == v6 )
      goto LABEL_22;
  }
  if ( v8 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
LABEL_22:
  if ( !v3 )
LABEL_23:
    v3 = 1;
  if ( !v4 )
    v4 = 2;
  if ( v3 == 2 )
  {
    v2 = 1;
  }
  else if ( v3 == 3 )
  {
    v2 = 2;
  }
  result = v2 | 4;
  if ( v4 != 1 )
    return v2;
  return result;
}
