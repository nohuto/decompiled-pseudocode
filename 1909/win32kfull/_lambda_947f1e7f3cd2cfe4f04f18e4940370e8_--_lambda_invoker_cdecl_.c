/*
 * XREFs of _lambda_947f1e7f3cd2cfe4f04f18e4940370e8_::_lambda_invoker_cdecl_ @ 0x1C0252A00
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C0079528 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?OnTimerNotification@InteractiveControlDevice@@QEAAJXZ @ 0x1C025398C (-OnTimerNotification@InteractiveControlDevice@@QEAAJXZ.c)
 */

__int64 __fastcall lambda_947f1e7f3cd2cfe4f04f18e4940370e8_::_lambda_invoker_cdecl_(
        __int64 a1,
        __int64 a2,
        unsigned int a3)
{
  __int64 result; // rax
  __int64 v5; // rdi
  InteractiveControlDevice **v6; // rbx
  InteractiveControlDevice *v7; // rcx

  result = (__int64)InteractiveControlManager::Instance();
  v5 = 5LL;
  v6 = (InteractiveControlDevice **)(result + 40);
  do
  {
    v7 = *v6;
    if ( *v6 )
    {
      result = a3;
      if ( a3 == *((_QWORD *)v7 + 44) )
        result = InteractiveControlDevice::OnTimerNotification(v7);
    }
    ++v6;
    --v5;
  }
  while ( v5 );
  return result;
}
