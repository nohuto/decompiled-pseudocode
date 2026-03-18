/*
 * XREFs of ?GetAnalogExclusiveTokenEvent@CTokenManager@@UEAAJPEAPEAX@Z @ 0x1C0053610
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x1C00079E0 (-AcquireTokenManagerLock@CTokenManager@@AEAAXXZ.c)
 *     ?OpenEventForSynchonize@CTokenManager@@CAJPEAXPEAPEAX@Z @ 0x1C0019FCC (-OpenEventForSynchonize@CTokenManager@@CAJPEAXPEAPEAX@Z.c)
 */

__int64 __fastcall CTokenManager::GetAnalogExclusiveTokenEvent(void **this, void **a2)
{
  int v4; // esi
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-38h] BYREF

  CTokenManager::AcquireTokenManagerLock((CTokenManager *)this);
  if ( this[9]
    || (ObjectAttributes.RootDirectory = 0LL,
        ObjectAttributes.ObjectName = 0LL,
        ObjectAttributes.Length = 48,
        ObjectAttributes.Attributes = 512,
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL,
        v4 = ZwCreateEvent(this + 9, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0),
        v4 >= 0) )
  {
    v4 = CTokenManager::OpenEventForSynchonize(this[9], a2);
  }
  this[12] = 0LL;
  ExReleasePushLockExclusiveEx(this + 11, 0LL);
  return (unsigned int)v4;
}
