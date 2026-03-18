/*
 * XREFs of PopAudioAccountingCallback @ 0x1407202E4
 * Callers:
 *     PopWnfAudioCallback @ 0x140720080 (PopWnfAudioCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopAudioAccountingCallback(char a1)
{
  __int64 result; // rax

  result = MEMORY[0xFFFFF78000000008];
  if ( a1 )
  {
    qword_140467BD8 = MEMORY[0xFFFFF78000000008];
  }
  else
  {
    if ( qword_140467B88 )
    {
      if ( qword_140467B88 <= (unsigned __int64)qword_140467BD8 )
        result = MEMORY[0xFFFFF78000000008] - qword_140467BD8;
      else
        result = MEMORY[0xFFFFF78000000008] - qword_140467B88;
      qword_140467BE0 += result;
    }
    qword_140467BD8 = 0LL;
  }
  return result;
}
