/*
 * XREFs of ?IsEqualByApp@CImmersiveApp@@UEAAJPEAUIImmersiveApplication@@PEAH@Z @ 0x1800242B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApp::IsEqualByApp(CImmersiveApp *this, struct IImmersiveApplication *a2, int *a3)
{
  struct IImmersiveApplication *v5; // rcx
  int (__fastcall **v6)(struct IImmersiveApplication *, GUID *, __int64 *); // rax
  int v7; // ebx
  __int64 result; // rax
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  v5 = (CImmersiveApp *)((char *)this - 88);
  if ( !v5 || !a2 )
  {
    *a3 = 0;
    return 0LL;
  }
  if ( v5 == a2 )
  {
    *a3 = 1;
    return 0LL;
  }
  v6 = *(int (__fastcall ***)(struct IImmersiveApplication *, GUID *, __int64 *))v5;
  v10 = 0LL;
  v9 = 0LL;
  if ( (*v6)(v5, &GUID_00000000_0000_0000_c000_000000000046, &v10) < 0 )
    goto LABEL_12;
  v7 = (**(__int64 (__fastcall ***)(struct IImmersiveApplication *, GUID *, __int64 *))a2)(
         a2,
         &GUID_00000000_0000_0000_c000_000000000046,
         &v9);
  if ( v7 >= 0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  if ( v7 >= 0 && v10 == v9 )
  {
    *a3 = 1;
    return 0LL;
  }
  else
  {
LABEL_12:
    result = 0LL;
    *a3 = 0;
  }
  return result;
}
