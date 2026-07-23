/*
 * XREFs of MiUpdateThunks @ 0x140A3D0CC
 * Callers:
 *     MiBootImageRelocated @ 0x140A3CFE0 (MiBootImageRelocated.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x1400E8980 (RtlpImageDirectoryEntryToDataEx.c)
 */

void __fastcall MiUpdateThunks(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  _QWORD *v4; // rdi
  _QWORD *v5; // rbx
  unsigned __int64 v6; // rbp
  __int64 v7; // r14
  unsigned __int64 v8; // rsi
  NTSTATUS v9; // eax
  unsigned __int64 *v10; // rcx
  unsigned __int64 v11; // rax
  __int64 v12; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v13; // [rsp+78h] [rbp+20h] BYREF

  v4 = (_QWORD *)(a1 + 16);
  v5 = *(_QWORD **)(a1 + 16);
  v6 = a2 + (unsigned int)(a4 - 1);
  v7 = a3 - a2;
  v8 = a2;
  if ( v5 != (_QWORD *)(a1 + 16) )
  {
    do
    {
      LOWORD(a3) = 12;
      LOBYTE(a2) = 1;
      v9 = RtlpImageDirectoryEntryToDataEx(v5[6], a2, a3, (__int64)&v13, &v12);
      v10 = (unsigned __int64 *)v12;
      if ( v9 < 0 )
        v10 = 0LL;
      v12 = (__int64)v10;
      if ( v10 )
      {
        v13 >>= 3;
        a2 = v13;
        if ( v13 )
        {
          do
          {
            v11 = *v10;
            if ( *v10 >= v8 && v11 <= v6 )
              *v10 = v7 + v11;
            ++v10;
            --a2;
          }
          while ( a2 );
        }
      }
      v5 = (_QWORD *)*v5;
    }
    while ( v5 != v4 );
  }
}
