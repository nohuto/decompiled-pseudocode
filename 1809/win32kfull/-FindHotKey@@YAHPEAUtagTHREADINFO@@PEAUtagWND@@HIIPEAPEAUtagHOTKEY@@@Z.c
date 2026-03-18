/*
 * XREFs of ?FindHotKey@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@HIIPEAPEAUtagHOTKEY@@@Z @ 0x1C00A53F4
 * Callers:
 *     _RegisterHotKey @ 0x1C00A50DC (_RegisterHotKey.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FindHotKey(
        struct tagTHREADINFO *a1,
        struct tagWND *a2,
        int a3,
        __int16 a4,
        unsigned int a5,
        struct tagHOTKEY **a6)
{
  unsigned int v6; // r11d
  struct tagHOTKEY *v7; // rbx
  struct tagHOTKEY * near *i; // r10
  __int64 result; // rax

  v6 = 0;
  v7 = 0LL;
  for ( i = (&gphkHashTable)[a5 & 0x7F]; i; i = (struct tagHOTKEY * near *)i[5] )
  {
    if ( *i == a1 && i[2] == a2 && *((_DWORD *)i + 8) == a3 )
      v7 = (struct tagHOTKEY *)i;
    if ( *((_WORD *)i + 12) == a4 && *((_DWORD *)i + 7) == a5 )
      v6 = 1;
  }
  result = v6;
  *a6 = v7;
  return result;
}
