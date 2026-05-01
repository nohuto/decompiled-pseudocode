/*
 * XREFs of ?Suspend@CRunnableTask@@UEAAJXZ @ 0x1802DFCD0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetAbort@CRunnableTask@@IEAAXJ@Z @ 0x1802DF9C8 (-SetAbort@CRunnableTask@@IEAAXJ@Z.c)
 */

__int64 __fastcall CRunnableTask::Suspend(CRunnableTask *this)
{
  if ( (*((_BYTE *)this + 48) & 1) == 0 )
    return 2147500033LL;
  if ( *((_DWORD *)this + 11) != 1 )
    return 2147500037LL;
  if ( _InterlockedExchange((volatile __int32 *)this + 11, 2) == 4 )
  {
    *((_DWORD *)this + 11) = 4;
    return 0LL;
  }
  else
  {
    CRunnableTask::SetAbort(this, 1);
    return (*(__int64 (__fastcall **)(CRunnableTask *))(*(_QWORD *)this + 80LL))(this);
  }
}
