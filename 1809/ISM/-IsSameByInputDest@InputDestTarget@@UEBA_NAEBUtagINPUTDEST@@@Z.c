/*
 * XREFs of ?IsSameByInputDest@InputDestTarget@@UEBA_NAEBUtagINPUTDEST@@@Z @ 0x180090DC0
 * Callers:
 *     <none>
 * Callees:
 *     ??8@YA_NAEBUtagMsgRoutingInfo@@0@Z @ 0x180090A90 (--8@YA_NAEBUtagMsgRoutingInfo@@0@Z.c)
 */

char __fastcall InputDestTarget::IsSameByInputDest(InputDestTarget *this, const struct tagINPUTDEST *a2)
{
  __int64 v2; // rax
  char v3; // r8

  v2 = *(_QWORD *)((char *)a2 + 4);
  v3 = 0;
  if ( *((_QWORD *)this + 7) || v2 )
  {
    if ( *((_QWORD *)this + 7) == v2 )
      return 1;
  }
  else if ( *((_DWORD *)a2 + 8) == *((_DWORD *)this + 4) )
  {
    return operator==((__int64)a2 + 32, (__int64)this + 16);
  }
  return v3;
}
