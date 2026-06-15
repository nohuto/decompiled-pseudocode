/*
 * XREFs of VerifyCriticalProcessing @ 0x180110564
 * Callers:
 *     ReconsiderSpatialOnComboEndpoints @ 0x180110244 (ReconsiderSpatialOnComboEndpoints.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004C07C (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     GetPackedSysFx2List @ 0x18010FAFC (GetPackedSysFx2List.c)
 *     HasEndpointProtectionOverride @ 0x18010FBB4 (HasEndpointProtectionOverride.c)
 *     ?LogSpatialCriticalProcessingList@@YAXPEBGKK_N@Z @ 0x180110B90 (-LogSpatialCriticalProcessingList@@YAXPEBGKK_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VerifyCriticalProcessing(CEndpointCharacteristics *a1, __int64 a2, bool *a3)
{
  __int64 result; // rax
  unsigned int v7; // esi
  int v8; // eax
  unsigned int v9; // r8d
  unsigned int v10; // ebx
  LPVOID pv[2]; // [rsp+20h] [rbp-20h] BYREF
  GUID v12; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  int v14; // [rsp+70h] [rbp+30h] BYREF
  int v15; // [rsp+78h] [rbp+38h] BYREF

  pv[1] = (LPVOID)-2LL;
  *a3 = 0;
  LOBYTE(v14) = 0;
  if ( (int)HasEndpointProtectionOverride((__int64)a1, a2, (char *)&v14) >= 0 && (_BYTE)v14 )
  {
    *a3 = 1;
    return 0LL;
  }
  else
  {
    v12 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    result = GetPackedSysFx2List(a1, &v12, &v15);
    if ( (int)result >= 0 )
    {
      v12 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      result = GetPackedSysFx2List(a1, &v12, &v14);
      if ( (int)result >= 0 )
      {
        v7 = v15 | v14;
        *a3 = ((v15 | v14) & 0x28800) == 0;
        pv[0] = 0LL;
        wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
          pv,
          0LL);
        v8 = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)a2 + 40LL))(a2, pv);
        v10 = v8;
        if ( v8 >= 0 )
        {
          LogSpatialCriticalProcessingList((const unsigned __int16 *)pv[0], v7, v9, *a3);
          v10 = 0;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            340LL,
            (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
            (const char *)(unsigned int)v8);
        }
        if ( pv[0] )
          CoTaskMemFree(pv[0]);
        return v10;
      }
    }
  }
  return result;
}
