/*
 * XREFs of ?MarkInvalid@CInputQueue@@UEAAXXZ @ 0x1C00806D0
 * Callers:
 *     ??_GCInputQueue@@UEAAPEAXI@Z @ 0x1C0072D00 (--_GCInputQueue@@UEAAPEAXI@Z.c)
 * Callees:
 *     memset @ 0x1C00AF780 (memset.c)
 */

void __fastcall CInputQueue::MarkInvalid(CInputQueue *this)
{
  __int64 v2; // rcx

  if ( (int)IsUserDetachQueueFromInputWindowApiExtSupported() < 0 )
  {
    *((_QWORD *)this + 2) = 0LL;
    *((_QWORD *)this + 3) = 0LL;
  }
  else if ( *((_QWORD *)this + 3) )
  {
    v2 = *((_QWORD *)this + 2);
    *((_QWORD *)this + 2) = 0LL;
    *((_QWORD *)this + 3) = 0LL;
    UserDetachQueueFromInputWindowApiExt(v2, this);
  }
  memset((char *)this + 40, 0, 0x28uLL);
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 3) = 0;
}
