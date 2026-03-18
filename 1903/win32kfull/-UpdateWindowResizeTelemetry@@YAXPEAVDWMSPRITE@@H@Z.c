/*
 * XREFs of ?UpdateWindowResizeTelemetry@@YAXPEAVDWMSPRITE@@H@Z @ 0x1C026BF90
 * Callers:
 *     ?CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z @ 0x1C026B2A8 (-CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall UpdateWindowResizeTelemetry(struct DWMSPRITE *a1, int a2)
{
  __int64 v2; // rdx

  if ( a2 )
  {
    *((_QWORD *)a1 + 18) = MEMORY[0xFFFFF78000000014];
  }
  else
  {
    v2 = (MEMORY[0xFFFFF78000000014] - *((_QWORD *)a1 + 18)) / 10000LL;
    if ( v2 > *((unsigned int *)a1 + 32) )
      *((_DWORD *)a1 + 32) = v2;
    *((_DWORD *)a1 + 33) += v2;
    ++*((_DWORD *)a1 + 34);
  }
}
