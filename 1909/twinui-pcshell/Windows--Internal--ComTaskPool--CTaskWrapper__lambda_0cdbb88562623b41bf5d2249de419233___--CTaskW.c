/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0cdbb88562623b41bf5d2249de419233___::CTaskWrapper__lambda_0cdbb88562623b41bf5d2249de419233_____lambda_0cdbb88562623b41bf5d2249de419233___ @ 0x1800A8FA8
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_0cdbb88562623b41bf5d2249de419233___ @ 0x1800A938C (Windows--Internal--ComTaskPool--QueueTask__lambda_0cdbb88562623b41bf5d2249de419233___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18002AEF4 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0cdbb88562623b41bf5d2249de419233___::CTaskWrapper__lambda_0cdbb88562623b41bf5d2249de419233_____lambda_0cdbb88562623b41bf5d2249de419233___(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v4; // rcx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)a2;
  v4 = (_QWORD *)(a2 + 24);
  *(_OWORD *)(a1 + 20) = *(_OWORD *)(a2 + 4);
  *(_BYTE *)(a1 + 36) = *(_BYTE *)(a2 + 20);
  *(_QWORD *)(a1 + 40) = 0LL;
  if ( a1 + 40 != a2 + 24 )
  {
    *(_QWORD *)(a1 + 40) = *v4;
    *v4 = 0LL;
  }
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 32);
  *(_QWORD *)a1 = off_18044E518;
  return a1;
}
