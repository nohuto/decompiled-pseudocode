/*
 * XREFs of ??$_IteratorGetMany@U?$IIterator_impl@U?$AggregateType@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@PEAUIGetCurrentActivityForViewOperationResults@2345@@Internal@Foundation@Windows@@$00@Collections@Foundation@Windows@@PEAUIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@4@@Detail@Collections@Foundation@Windows@@YAJPEAU?$IIterator_impl@U?$AggregateType@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@PEAUIGetCurrentActivityForViewOperationResults@2345@@Internal@Foundation@Windows@@$00@123@IPEAPEAUIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@3@PEAI@Z @ 0x18010CB58
 * Callers:
 *     ?GetMany@?$IIterator_impl@PEAUIChainLink@Chaining@Shell@Internal@Windows@@$00@Collections@Foundation@Windows@@UEAAJIPEAPEAUIChainLink@Chaining@Shell@Internal@4@PEAI@Z @ 0x180112550 (-GetMany@-$IIterator_impl@PEAUIChainLink@Chaining@Shell@Internal@Windows@@$00@Collections@Founda.c)
 * Callees:
 *     memset_0 @ 0x180087BFA (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$_Cleanup@UICoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@I@Detail@Collections@Foundation@Windows@@YAXQEAPEAUICoreInputViewOcclusion@Core@ViewManagement@UI@3@I@Z @ 0x18010C2B8 (--$_Cleanup@UICoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@I@Detail@Collections@Founda.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Detail::_IteratorGetMany<Windows::Foundation::Collections::IIterator_impl<Windows::Foundation::Internal::AggregateType<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *,Windows::Internal::Data::Activities::IGetCurrentActivityForViewOperationResults *>,1>,Windows::Internal::Data::Activities::IGetCurrentActivityForViewOperationResults *>(
        __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        unsigned int *a4)
{
  __int64 v8; // rdi
  int v9; // ebx
  char v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = 0;
  v8 = 0LL;
  memset_0(a3, 0, 8LL * a2);
  *a4 = 0;
  v9 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a1 + 56LL))(a1, &v11);
  if ( v9 < 0 )
    goto LABEL_8;
  do
  {
    if ( !v11 || (unsigned int)v8 >= a2 )
      break;
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)a1 + 48LL))(a1, &a3[v8]);
    if ( v9 < 0 )
      goto LABEL_8;
    v8 = (unsigned int)(v8 + 1);
    v9 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a1 + 64LL))(a1, &v11);
  }
  while ( v9 >= 0 );
  if ( v9 < 0 )
LABEL_8:
    Windows::Foundation::Collections::Detail::_Cleanup<Windows::UI::ViewManagement::Core::ICoreInputViewOcclusion,unsigned int>(
      a3,
      *a4);
  else
    *a4 = v8;
  return (unsigned int)v9;
}
