/*
 * XREFs of AlpcpProbeMessageAttributes @ 0x140614174
 * Callers:
 *     AlpcpProcessConnectionRequest @ 0x1406146BC (AlpcpProcessConnectionRequest.c)
 * Callees:
 *     ProbeForWrite @ 0x14062AA80 (ProbeForWrite.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall AlpcpProbeMessageAttributes(int a1, volatile void *a2, char a3)
{
  __int64 v5; // r9
  ULONG v6; // r8d
  __int64 v7; // rax
  int v8; // ebx
  int v9; // ecx
  int v10; // eax
  int v11; // ecx
  int v12; // edx
  ULONG v13; // eax
  bool v14; // zf
  unsigned int v15; // ecx
  __int64 v16; // rax
  ULONG v18; // eax
  ULONG v19; // ecx

  v5 = 0x7FFFFFFF0000LL;
  v6 = 8;
  v7 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
    v7 = (__int64)a2;
  v8 = *(_DWORD *)v7;
  if ( (a1 & 0xC0000000) == 0x80000000 )
  {
    if ( v8 < 0 )
      v6 = 20;
    v18 = v6 + 16;
    if ( (v8 & 0x40000000) == 0 )
      v18 = v6;
    v6 = 4;
    v19 = v18 + 20;
    if ( (v8 & 0x20000000) == 0 )
      v19 = v18;
    v13 = v19 + 16;
    if ( (v8 & 0x10000000) == 0 )
      v13 = v19;
    v14 = (v8 & 0x8000000) == 0;
    v15 = v13 + 24;
  }
  else
  {
    v9 = 8;
    if ( v8 < 0 )
      v9 = 32;
    v10 = v9 + 32;
    if ( (v8 & 0x40000000) == 0 )
      v10 = v9;
    v11 = v10 + 32;
    if ( (v8 & 0x20000000) == 0 )
      v11 = v10;
    v12 = v11 + 24;
    if ( (v8 & 0x10000000) == 0 )
      v12 = v11;
    v13 = v12 + 24;
    if ( (v8 & 0x8000000) == 0 )
      v13 = v12;
    v14 = (v8 & 0x4000000) == 0;
    v15 = v13 + 8;
  }
  if ( v14 )
    v15 = v13;
  v16 = v15 + 8;
  if ( (v8 & 0x2000000) == 0 )
    v16 = v15;
  if ( !a3 && (v8 & 0xA0000000) == 0 )
  {
    if ( !v16 || ((v6 - 1) & (unsigned int)a2) == 0 )
      return (unsigned int)v8;
LABEL_35:
    ExRaiseDatatypeMisalignment();
  }
  if ( !(_DWORD)v16 )
  {
    ProbeForWrite(a2, 0LL, v6);
    return (unsigned int)v8;
  }
  if ( ((v6 - 1) & (unsigned int)a2) != 0 )
    goto LABEL_35;
  if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
    v5 = (__int64)a2;
  *(_BYTE *)v5 = *(_BYTE *)v5;
  *(_BYTE *)(v5 + (unsigned int)v16 - 1) = *(_BYTE *)(v5 + (unsigned int)v16 - 1);
  return (unsigned int)v8;
}
