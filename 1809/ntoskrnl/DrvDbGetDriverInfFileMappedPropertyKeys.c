/*
 * XREFs of DrvDbGetDriverInfFileMappedPropertyKeys @ 0x140902D18
 * Callers:
 *     DrvDbDispatchDriverInfFile @ 0x1406D3910 (DrvDbDispatchDriverInfFile.c)
 * Callees:
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     _RegRtlQueryValue @ 0x1405C89A8 (_RegRtlQueryValue.c)
 *     DrvDbOpenObjectRegKey @ 0x1406D3F18 (DrvDbOpenObjectRegKey.c)
 */

__int64 __fastcall DrvDbGetDriverInfFileMappedPropertyKeys(
        _QWORD *a1,
        __int64 a2,
        void *a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6)
{
  HANDLE v6; // rsi
  unsigned int *v7; // rdi
  signed int v9; // ebx
  unsigned int v10; // ebp
  _UNKNOWN **v11; // r14
  unsigned int v12; // r15d
  const WCHAR *v13; // rdx
  signed int Value; // eax
  _OWORD *v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rcx
  unsigned int v18; // edx
  int v19; // eax
  unsigned int v20; // ecx
  HANDLE Handle; // [rsp+80h] [rbp+18h] BYREF

  v6 = a3;
  v7 = (unsigned int *)a6;
  Handle = 0LL;
  *(_DWORD *)a6 = 0;
  if ( !a3 )
  {
    v9 = DrvDbOpenObjectRegKey(a1, 0LL, 3u, a2, 1, 0, &Handle, 0LL);
    if ( v9 < 0 )
      goto LABEL_18;
    v6 = Handle;
  }
  v10 = 0;
  v11 = &off_1403515A0;
  v12 = 0;
  while ( 1 )
  {
    v13 = (const WCHAR *)v11[2];
    LODWORD(a6) = 0;
    Value = RegRtlQueryValue(v6, v13, 0LL, 0LL, (unsigned int *)&a6);
    v9 = Value;
    if ( Value == -1073741772 )
    {
      v9 = 0;
      goto LABEL_15;
    }
    if ( Value && Value != -1073741789 )
      goto LABEL_18;
    if ( a4 && v10 < a5 )
    {
      v15 = *v11;
      v16 = v10++;
      v17 = 5 * v16;
      *(_OWORD *)(a4 + 4 * v17) = *(_OWORD *)*v11;
      *(_DWORD *)(a4 + 4 * v17 + 16) = *((_DWORD *)v15 + 4);
    }
    v18 = *v7;
    v19 = -1;
    v20 = *v7 + 1;
    if ( v20 >= *v7 )
      v19 = *v7 + 1;
    v9 = v20 < v18 ? 0xC0000095 : 0;
    *v7 = v19;
    if ( v20 < v18 )
      break;
LABEL_15:
    ++v12;
    v11 += 5;
    if ( v12 >= 4 )
      goto LABEL_18;
  }
  *v7 = 0;
LABEL_18:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v9;
}
