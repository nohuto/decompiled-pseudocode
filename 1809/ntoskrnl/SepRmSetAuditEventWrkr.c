/*
 * XREFs of SepRmSetAuditEventWrkr @ 0x140757180
 * Callers:
 *     SepRmCommandServerThread @ 0x140741490 (SepRmCommandServerThread.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1400B9B60 (PsIsCurrentThreadInServerSilo.c)
 */

char __fastcall SepRmSetAuditEventWrkr(__int64 a1, __int64 a2)
{
  unsigned int v3; // edi
  int *v4; // rax
  __int64 *v5; // r11
  __int64 v6; // rsi
  unsigned __int16 v7; // r9
  __int16 v8; // cx
  __int16 v9; // r10
  __int64 v10; // r8
  __int16 v11; // bx
  int v12; // edx
  int v13; // ecx
  int v14; // r8d

  v3 = 0;
  *(_DWORD *)(a2 + 40) = 0;
  LOBYTE(v4) = PsIsCurrentThreadInServerSilo();
  if ( !(_BYTE)v4 )
  {
    v4 = SeAuditingStateByCategory;
    v5 = AdtpPerCategoryCount;
    v6 = 9LL;
    do
    {
      v7 = *(_WORD *)v5;
      v8 = 0;
      *v4 = 0;
      v9 = 0;
      if ( !v7 )
        goto LABEL_11;
      v10 = v7;
      do
      {
        *(_WORD *)&SeAuditingState[2 * v3] = 0;
        v11 = *(_WORD *)(a1 + 2LL * v3 + 44);
        if ( (v11 & 1) != 0 )
        {
          SeAuditingState[2 * v3] = 1;
          ++v8;
          v11 = *(_WORD *)(a1 + 2LL * v3 + 44);
        }
        if ( (v11 & 2) != 0 )
        {
          SeAuditingState[2 * v3 + 1] = 1;
          ++v9;
        }
        ++v3;
        --v10;
      }
      while ( v10 );
      if ( v8 )
      {
        if ( v8 == v7 )
        {
          v12 = 33;
          *v4 = 1;
          v13 = 65;
          v14 = 17;
        }
        else
        {
          v12 = 34;
          *v4 = 2;
          v13 = 66;
          v14 = 18;
        }
      }
      else
      {
LABEL_11:
        v12 = 36;
        *v4 = 4;
        v13 = 68;
        v14 = 20;
      }
      if ( v9 )
      {
        v13 = v12;
        if ( v9 == v7 )
          v13 = v14;
      }
      *v4 = v13;
      v5 = (__int64 *)((char *)v5 + 2);
      ++v4;
      --v6;
    }
    while ( v6 );
    SepRmAuditingEnabled = 1;
  }
  return (char)v4;
}
