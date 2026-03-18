/*
 * XREFs of UsbhGetLocationIdString @ 0x1C00228A4
 * Callers:
 *     UsbhCreatePdo @ 0x1C0022E20 (UsbhCreatePdo.c)
 * Callees:
 *     PdoExt @ 0x1C0011270 (PdoExt.c)
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     Short2Bcd @ 0x1C0025460 (Short2Bcd.c)
 *     memset @ 0x1C002CA00 (memset.c)
 */

__int64 __fastcall UsbhGetLocationIdString(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v6; // rdi
  _DWORD *v7; // rax
  unsigned __int16 v8; // si
  unsigned __int16 v9; // bp
  unsigned int v10; // edi
  _QWORD *PoolWithTag; // rbx
  _WORD *i; // rcx
  int v13; // r15d
  char *v14; // rax
  char *v15; // rbp
  _WORD *v16; // rcx

  v6 = PdoExt(a2);
  v7 = FdoExt(a1);
  v8 = Short2Bcd(*((unsigned __int16 *)v7 + 688));
  v9 = Short2Bcd(*((unsigned __int16 *)v6 + 714));
  v10 = 0;
  PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x14uLL, 0x42554855u);
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  *PoolWithTag = 0LL;
  PoolWithTag[1] = 0LL;
  *((_DWORD *)PoolWithTag + 4) = 0;
  *(_OWORD *)PoolWithTag = *(_OWORD *)L"Port_#nnnn";
  *((_DWORD *)PoolWithTag + 4) = *(_DWORD *)L"nn";
  for ( i = PoolWithTag; *i != 110; ++i )
    ;
  v13 = 42;
  *i = (v9 >> 12) + 48;
  i[1] = (HIBYTE(v9) & 0xF) + 48;
  i[3] = (v9 & 0xF) + 48;
  i[2] = ((unsigned __int8)v9 >> 4) + 48;
  v14 = (char *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x2AuLL, 0x42554855u);
  v15 = v14;
  if ( v14 )
  {
    memset(v14, 0, 0x2AuLL);
    *(_OWORD *)v15 = *(_OWORD *)PoolWithTag;
    *((_DWORD *)v15 + 4) = *((_DWORD *)PoolWithTag + 4);
    v16 = v15 + 20;
    *(_OWORD *)(v15 + 20) = *(_OWORD *)L".Hub_#nnnn";
    *((_DWORD *)v15 + 9) = *(_DWORD *)L"nn";
    while ( *v16 != 110 )
      ++v16;
    *v16 = (v8 >> 12) + 48;
    v16[1] = (HIBYTE(v8) & 0xF) + 48;
    v16[2] = ((unsigned __int8)v8 >> 4) + 48;
    v16[3] = (v8 & 0xF) + 48;
  }
  else
  {
    v13 = 0;
  }
  ExFreePoolWithTag(PoolWithTag, 0);
  if ( v15 )
  {
    *(_DWORD *)(a4 + 4) = v13;
    *(_WORD *)a4 = 1033;
    *(_QWORD *)(a4 + 8) = v15;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v10;
}
