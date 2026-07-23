/*
 * XREFs of PopAudioAccountingCallback @ 0x1406DCAC8
 * Callers:
 *     PopWnfAudioCallback @ 0x1406DC870 (PopWnfAudioCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopAudioAccountingCallback(char a1)
{
  __int64 result; // rax

  result = MEMORY[0xFFFFF78000000008];
  if ( a1 )
  {
    qword_14043D498 = MEMORY[0xFFFFF78000000008];
  }
  else
  {
    if ( qword_14043D448 )
    {
      if ( qword_14043D448 <= (unsigned __int64)qword_14043D498 )
        result = MEMORY[0xFFFFF78000000008] - qword_14043D498;
      else
        result = MEMORY[0xFFFFF78000000008] - qword_14043D448;
      qword_14043D4A0 += result;
    }
    qword_14043D498 = 0LL;
  }
  return result;
}
