/*
 * XREFs of ?GetRoutingInfo@ContextualProcessorBuffer@@UEBA?AUtagMsgRoutingInfo@@XZ @ 0x1800C3CF0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ContextualProcessorBuffer::GetRoutingInfo(__int64 a1, __int64 a2)
{
  __int64 *v3; // rbx
  int (__fastcall ***v4)(_QWORD, GUID *, __int64 **); // rcx
  __int64 *v5; // rcx
  __int64 v6; // rax
  _OWORD v8[2]; // [rsp+28h] [rbp-28h] BYREF
  __int64 v9; // [rsp+48h] [rbp-8h]
  __int64 *v10; // [rsp+60h] [rbp+10h] BYREF

  v3 = 0LL;
  v10 = 0LL;
  v4 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 **))(a1 + 88);
  if ( v4 )
  {
    if ( (**v4)(v4, &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631, &v10) >= 0 )
    {
      (*(void (__fastcall **)(__int64 *, __int64))(*v10 + 72))(v10, a2);
      v5 = v10;
      if ( v10 )
      {
        v10 = 0LL;
        v6 = *v5;
LABEL_8:
        (*(void (__fastcall **)(__int64 *))(v6 + 16))(v5);
        return a2;
      }
      return a2;
    }
    v3 = v10;
  }
  memset_0(v8, 0, 0x28uLL);
  *(_OWORD *)a2 = v8[0];
  *(_OWORD *)(a2 + 16) = v8[1];
  *(_QWORD *)(a2 + 32) = v9;
  if ( v3 )
  {
    v10 = 0LL;
    v6 = *v3;
    v5 = v3;
    goto LABEL_8;
  }
  return a2;
}
