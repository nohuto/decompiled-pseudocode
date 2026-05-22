/*
 * XREFs of ?MessageProc@ButtonRecognizer@@SAJPEAXPEBXH@Z @ 0x1800C5B30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ButtonRecognizer::MessageProc(_QWORD *a1, const void *a2, int a3)
{
  unsigned int v6; // ebx

  if ( a1 )
    (*(void (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
  v6 = CoreUICallReceive(
         a1[25],
         &IComboButton_Receive<ButtonRecognizer>::Type,
         &Microsoft::CoreUI::MessageCall::ComboButton_g_parameters_B0ZeIKxQP9pAXzUZQ3XJT9gq91M,
         18LL,
         a1,
         a2,
         a3);
  (*(void (__fastcall **)(_QWORD *))(*a1 + 16LL))(a1);
  return v6;
}
