/*
 * XREFs of MiUpdateThunks @ 0x140A3D2FC
 * Callers:
 *     MiBootImageRelocated @ 0x140A3D210 (MiBootImageRelocated.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x1400AFB60 (RtlpImageDirectoryEntryToDataEx.c)
 */

void __fastcall MiUpdateThunks(__int64 a1, unsigned __int64 a2, __int64 a3, int a4)
{
  _QWORD *v4; // rdi
  _QWORD *v5; // rbx
  unsigned __int64 v6; // rbp
  __int64 v7; // r14
  NTSTATUS v9; // eax
  unsigned __int64 *v10; // rcx
  __int64 v11; // rdx
  unsigned __int64 v12; // rax
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v14; // [rsp+78h] [rbp+20h] BYREF

  v4 = (_QWORD *)(a1 + 16);
  v5 = *(_QWORD **)(a1 + 16);
  v6 = a2 + (unsigned int)(a4 - 1);
  v7 = a3 - a2;
  if ( v5 != (_QWORD *)(a1 + 16) )
  {
    do
    {
      v9 = RtlpImageDirectoryEntryToDataEx(v5[6], 1, 0xCu, (int)&v14, &v13);
      v10 = (unsigned __int64 *)v13;
      if ( v9 < 0 )
        v10 = 0LL;
      v13 = (__int64)v10;
      if ( v10 )
      {
        v14 >>= 3;
        v11 = v14;
        if ( v14 )
        {
          do
          {
            v12 = *v10;
            if ( *v10 >= a2 && v12 <= v6 )
              *v10 = v7 + v12;
            ++v10;
            --v11;
          }
          while ( v11 );
        }
      }
      v5 = (_QWORD *)*v5;
    }
    while ( v5 != v4 );
  }
}
