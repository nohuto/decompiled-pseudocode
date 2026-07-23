/*
 * XREFs of TpDisassociateCallback @ 0x18007F330
 * Callers:
 *     <none>
 * Callees:
 *     sub_180066BBC @ 0x180066BBC (sub_180066BBC.c)
 */

void __cdecl TpDisassociateCallback(PTP_CALLBACK_INSTANCE Instance)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  _RTL_SRWLOCK *v3; // rbx
  char v4; // al
  unsigned int v5; // eax
  _RTL_SRWLOCK *Ptr; // rdx

  if ( !Instance
    || (v3 = (_RTL_SRWLOCK *)*((_QWORD *)Instance + 23)) == 0LL
    || *((_QWORD *)Instance + 22)
    || (v4 = *((_BYTE *)Instance + 76), (v4 & 2) != 0) )
  {
    sub_18010EFC8(Instance, v1, v2);
  }
  else
  {
    *((_BYTE *)Instance + 76) = v4 | 2;
    v5 = *((_DWORD *)Instance + 36) & 0xFFFFFFBF;
    *((_DWORD *)Instance + 36) = v5;
    Ptr = (_RTL_SRWLOCK *)v3[2].Ptr;
    *((_QWORD *)Instance + 22) = Ptr;
    if ( Ptr )
    {
      *((_DWORD *)Instance + 36) = v5 | 0x20;
      sub_180066BBC(Ptr + 4, 1, 0);
    }
    sub_180066BBC(v3 + 7, -1, 0);
  }
}
