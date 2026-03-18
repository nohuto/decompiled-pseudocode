/*
 * XREFs of PopAudioAccountingCallback @ 0x14071E454
 * Callers:
 *     PopWnfAudioCallback @ 0x14071E1F0 (PopWnfAudioCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopAudioAccountingCallback(char a1)
{
  __int64 result; // rax

  result = MEMORY[0xFFFFF78000000008];
  if ( a1 )
  {
    qword_140467E98 = MEMORY[0xFFFFF78000000008];
  }
  else
  {
    if ( qword_140467E48 )
    {
      if ( qword_140467E48 <= (unsigned __int64)qword_140467E98 )
        result = MEMORY[0xFFFFF78000000008] - qword_140467E98;
      else
        result = MEMORY[0xFFFFF78000000008] - qword_140467E48;
      qword_140467EA0 += result;
    }
    qword_140467E98 = 0LL;
  }
  return result;
}
