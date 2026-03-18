/*
 * XREFs of ?VerifyPartitionTable@SC_DISK@@QEAAJE@Z @ 0x140168744
 * Callers:
 *     IoVerifyPartitionTable @ 0x140704E70 (IoVerifyPartitionTable.c)
 * Callees:
 *     ?VerifyPartitionTable@SC_GPT@@QEAAJE@Z @ 0x14032A350 (-VerifyPartitionTable@SC_GPT@@QEAAJE@Z.c)
 */

__int64 __fastcall SC_DISK::VerifyPartitionTable(SC_DISK *this, unsigned __int8 a2)
{
  int v2; // r8d
  __int64 result; // rax
  SC_DISK *v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 62);
  result = 0LL;
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      v4 = this;
      return SC_GPT::VerifyPartitionTable((SC_GPT *)&v4, a2);
    }
    else
    {
      return 3221225659LL;
    }
  }
  return result;
}
