/*
 * XREFs of ?OnGetUnmetTabRequirementsResult@TabViewManager@@AEAAXPEAUHWND__@@W4DWM_TAB_WINDOW_REQUIREMENTS@@@Z @ 0x180252A28
 * Callers:
 *     ?OnMessage@TabViewManager@@UEAAJI_K_J@Z @ 0x180252AB0 (-OnMessage@TabViewManager@@UEAAJI_K_J@Z.c)
 * Callees:
 *     _Init_thread_footer @ 0x180089798 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180089800 (_Init_thread_header.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_49c0b2fb711056d9762ca69f307c87f4___ @ 0x180245E0C (Windows--Internal--ComTaskPool--QueueTask__lambda_49c0b2fb711056d9762ca69f307c87f4___.c)
 */

__int64 __fastcall TabViewManager::OnGetUnmetTabRequirementsResult(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF

  v4 = a3;
  v5 = 4LL;
  v6 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index);
  if ( dword_1805C3BA4 > *(_DWORD *)(v6 + 4) )
  {
    Init_thread_header(&dword_1805C3BA4);
    if ( dword_1805C3BA4 == -1 )
    {
      dword_1805C3BA8 = SHTaskPoolGetUniqueContext(v6);
      Init_thread_footer(&dword_1805C3BA4);
    }
  }
  *(_QWORD *)&v8 = a2;
  DWORD2(v8) = v4;
  return Windows::Internal::ComTaskPool::QueueTask__lambda_49c0b2fb711056d9762ca69f307c87f4___(v6, v5, a3, &v8);
}
