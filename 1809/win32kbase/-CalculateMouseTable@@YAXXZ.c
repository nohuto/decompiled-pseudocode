/*
 * XREFs of ?CalculateMouseTable@@YAXXZ @ 0x1C0048C30
 * Callers:
 *     xxxUpdatePerUserAccessPackSettings @ 0x1C0045A80 (xxxUpdatePerUserAccessPackSettings.c)
 * Callees:
 *     <none>
 */

void CalculateMouseTable(void)
{
  signed int v0; // r11d
  __int64 v1; // rbx
  signed int v2; // r8d
  ULONG v3; // ebp
  int v4; // edi
  int v5; // esi
  int v6; // r9d
  int v7; // r10d
  signed int v8; // ecx
  int v9; // edx
  bool v10; // zf
  __int64 v11; // rax
  __int64 v12; // rax

  v0 = 50 * dword_1C01CC978;
  v1 = 256LL;
  v2 = 0;
  v3 = 50000 * dword_1C01CC978 / (20 * dword_1C01CC97C);
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  do
  {
    v8 = v2 + v3;
    v2 = v0;
    if ( v8 <= v0 )
      v2 = v8;
    v4 += v2;
    v9 = (v4 - 1000 * v5 + 500) / 1000;
    v5 += v9;
    v10 = v2 == v0;
    if ( v2 < v0 )
    {
      if ( v7 < 128 )
      {
        v12 = v7++;
        gMouseCursor[v12 + 1] = v9;
      }
      v10 = v2 == v0;
    }
    if ( v10 && v6 < 128 )
    {
      v11 = v6++;
      gMouseCursor[v11 + 130] = v9;
    }
    --v1;
  }
  while ( v1 );
  gMouseCursor[0] = v7;
  byte_1C01CC8B1 = v6;
}
