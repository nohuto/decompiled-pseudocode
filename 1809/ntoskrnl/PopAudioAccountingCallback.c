/*
 * XREFs of PopAudioAccountingCallback @ 0x1406DB848
 * Callers:
 *     PopWnfAudioCallback @ 0x1406DB5F0 (PopWnfAudioCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopAudioAccountingCallback(char a1)
{
  __int64 result; // rax

  result = MEMORY[0xFFFFF78000000008];
  if ( a1 )
  {
    qword_14043C3D8 = MEMORY[0xFFFFF78000000008];
  }
  else
  {
    if ( qword_14043C388 )
    {
      if ( qword_14043C388 <= (unsigned __int64)qword_14043C3D8 )
        result = MEMORY[0xFFFFF78000000008] - qword_14043C3D8;
      else
        result = MEMORY[0xFFFFF78000000008] - qword_14043C388;
      qword_14043C3E0 += result;
    }
    qword_14043C3D8 = 0LL;
  }
  return result;
}
