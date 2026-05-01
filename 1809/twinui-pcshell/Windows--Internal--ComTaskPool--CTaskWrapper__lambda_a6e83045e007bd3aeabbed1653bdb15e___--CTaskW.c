/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a6e83045e007bd3aeabbed1653bdb15e___::CTaskWrapper__lambda_a6e83045e007bd3aeabbed1653bdb15e_____lambda_a6e83045e007bd3aeabbed1653bdb15e___ @ 0x180091CC4
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_a6e83045e007bd3aeabbed1653bdb15e___ @ 0x18009227C (Windows--Internal--ComTaskPool--QueueTask__lambda_a6e83045e007bd3aeabbed1653bdb15e___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180035E08 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a6e83045e007bd3aeabbed1653bdb15e___::CTaskWrapper__lambda_a6e83045e007bd3aeabbed1653bdb15e_____lambda_a6e83045e007bd3aeabbed1653bdb15e___(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v4; // rcx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
  v4 = (_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 24) = 0LL;
  if ( a1 + 24 != a2 + 8 )
  {
    *(_QWORD *)(a1 + 24) = *v4;
    *v4 = 0LL;
  }
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 16);
  *(_BYTE *)(a1 + 40) = *(_BYTE *)(a2 + 24);
  *(_BYTE *)(a1 + 41) = *(_BYTE *)(a2 + 25);
  *(_QWORD *)a1 = off_1803CB260;
  return a1;
}
