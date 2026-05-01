/*
 * XREFs of Windows::Internal::ComTaskPool::WrapWithTask__lambda_532f1f640b749836e78f2398ba6696dd__&_ @ 0x180067028
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_532f1f640b749836e78f2398ba6696dd__&_ @ 0x180066FC4 (Windows--Internal--ComTaskPool--QueueTask__lambda_532f1f640b749836e78f2398ba6696dd__-_.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_532f1f640b749836e78f2398ba6696dd__&__0 @ 0x18014C0E8 (Windows--Internal--ComTaskPool--QueueTask__lambda_532f1f640b749836e78f2398ba6696dd__-__0.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180059100 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_532f1f640b749836e78f2398ba6696dd__&___lambda_532f1f640b749836e78f2398ba6696dd__&_ @ 0x180067064 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_532f1f640b749.c)
 */

volatile int **__fastcall Windows::Internal::ComTaskPool::WrapWithTask__lambda_532f1f640b749836e78f2398ba6696dd____(
        volatile int **a1)
{
  volatile int **v2; // rax
  volatile int *v3; // rdx
  __int64 v4; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = (volatile int **)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_532f1f640b749836e78f2398ba6696dd______lambda_532f1f640b749836e78f2398ba6696dd____(&v6);
  v3 = *v2;
  *v2 = 0LL;
  v4 = v6;
  *a1 = v3;
  if ( v4 )
  {
    v6 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(
      v4,
      v3);
  }
  return a1;
}
