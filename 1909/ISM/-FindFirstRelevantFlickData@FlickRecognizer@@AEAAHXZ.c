/*
 * XREFs of ?FindFirstRelevantFlickData@FlickRecognizer@@AEAAHXZ @ 0x18010B074
 * Callers:
 *     ?CheckForFlick@FlickRecognizer@@AEAAXPEBVGestureSession@@@Z @ 0x18010AF44 (-CheckForFlick@FlickRecognizer@@AEAAXPEBVGestureSession@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FlickRecognizer::FindFirstRelevantFlickData(FlickRecognizer *this)
{
  unsigned int v2; // r9d
  unsigned int v3; // r11d
  int v4; // r10d
  __int64 v5; // rdx
  unsigned int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rax

  v2 = *((unsigned __int8 *)this + 136);
  v3 = *((unsigned __int16 *)this + 80);
  v4 = *((_DWORD *)this + 3 * *((unsigned __int8 *)this + 137) + 6);
  v5 = *((unsigned __int8 *)this + 136);
  while ( v4 - *((_DWORD *)this + 3 * v5 + 6) > v3 )
  {
    v6 = v2 + 1;
    v2 = 0;
    v7 = v5 + 1;
    if ( v5 != 9 )
      v2 = v6;
    v8 = v5;
    v5 = 0LL;
    if ( v8 != 9 )
      v5 = v7;
  }
  return v2;
}
