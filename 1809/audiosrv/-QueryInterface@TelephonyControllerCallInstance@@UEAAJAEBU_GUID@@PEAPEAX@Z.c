/*
 * XREFs of ?QueryInterface@TelephonyControllerCallInstance@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180147BA0
 * Callers:
 *     ?QueryInterface@TelephonyControllerCallInstance@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800699D0 (-QueryInterface@TelephonyControllerCallInstance@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TelephonyControllerCallInstance::QueryInterface(
        TelephonyControllerCallInstance *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rax

  v3 = a3 == 0LL ? 0x80004003 : 0;
  if ( !a3 )
    return v3;
  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_36fe3e61_0ba5_4136_87d6_516d940596ce.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_36fe3e61_0ba5_4136_87d6_516d940596ce.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_36fe3e61_0ba5_4136_87d6_516d940596ce.Data4;
  if ( !v4 )
  {
    *a3 = this;
    (*(void (__fastcall **)(TelephonyControllerCallInstance *))(*(_QWORD *)this + 8LL))(this);
    return v3;
  }
  return CUnknown::QueryInterface((TelephonyControllerCallInstance *)((char *)this + 8), a2, a3);
}
