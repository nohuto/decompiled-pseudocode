/*
 * XREFs of ?ReleaseAudioResourceHandle@CAudioResourceManager@@UEAAX_K@Z @ 0x1800F8DE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAudioResourceManager::ReleaseAudioResourceHandle(CAudioResourceManager *this, __int64 a2)
{
  __int64 v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = a2;
  (*(void (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 5) + 80LL))(*((_QWORD *)this + 5), &v2);
}
