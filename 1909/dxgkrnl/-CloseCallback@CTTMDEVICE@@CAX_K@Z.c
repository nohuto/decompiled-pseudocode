/*
 * XREFs of ?CloseCallback@CTTMDEVICE@@CAX_K@Z @ 0x1C02770C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0009898 (--3@YAXPEAX@Z.c)
 */

void __fastcall CTTMDEVICE::CloseCallback(void *a1, __int64 a2)
{
  __int64 v3; // rax
  int v4; // eax
  __int64 v5; // rdx
  struct _KEVENT *v6; // rcx

  if ( !a1 )
  {
    v3 = WdLogNewEntry5_WdAssertion(0LL, a2);
    *(_QWORD *)(v3 + 24) = 4811LL;
    WdLogEvent5_WdAssertion(v3);
  }
  v4 = _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 156, 1u);
  v5 = (unsigned int)(v4 >> 31);
  LODWORD(v5) = v4 % 32;
  *((_DWORD *)a1 + 2 * v5 + 157) = 1073741826;
  *((_DWORD *)a1 + 2 * (unsigned int)(v4 % 32) + 158) = MEMORY[0xFFFFF78000000008] / 0x2710uLL;
  if ( *((_BYTE *)a1 + 905) )
  {
    operator delete(a1);
  }
  else
  {
    ExReInitializeRundownProtection((PEX_RUNDOWN_REF)a1 + 6);
    v6 = (struct _KEVENT *)*((_QWORD *)a1 + 7);
    if ( v6 )
    {
      KeSetEvent(v6, 0, 0);
      *((_QWORD *)a1 + 7) = 0LL;
    }
  }
}
