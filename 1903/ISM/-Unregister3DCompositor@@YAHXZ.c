/*
 * XREFs of ?Unregister3DCompositor@@YAHXZ @ 0x1800533A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstanceOffInputThread@MPC3DStateHelper@@SAPEAV1@XZ @ 0x18007C348 (-GetInstanceOffInputThread@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ?Unregister3DCompositor@MPC3DStateHelper@@QEAAXXZ @ 0x18007C650 (-Unregister3DCompositor@MPC3DStateHelper@@QEAAXXZ.c)
 */

__int64 Unregister3DCompositor(void)
{
  RTL_SRWLOCK *InstanceOffInputThread; // rax

  InstanceOffInputThread = (RTL_SRWLOCK *)MPC3DStateHelper::GetInstanceOffInputThread();
  MPC3DStateHelper::Unregister3DCompositor(InstanceOffInputThread);
  return 1LL;
}
