/*
 * XREFs of MiAttemptPageFileExtension @ 0x14088CC58
 * Callers:
 *     MiExtendPagingFiles @ 0x14088CF84 (MiExtendPagingFiles.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     MiFinishPageFileExtension @ 0x1402CE39C (MiFinishPageFileExtension.c)
 *     IopQueryXxxInformation @ 0x14062AFE4 (IopQueryXxxInformation.c)
 *     IoSetInformation @ 0x1406ECC40 (IoSetInformation.c)
 */

unsigned __int64 __fastcall MiAttemptPageFileExtension(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // r14
  unsigned __int64 i; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r15
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  int v14; // eax
  struct _FILE_OBJECT *v15; // rcx
  __int64 v17; // [rsp+40h] [rbp-29h] BYREF
  __int64 v18; // [rsp+48h] [rbp-21h] BYREF
  __int64 v19; // [rsp+50h] [rbp-19h]
  __int64 v20; // [rsp+58h] [rbp-11h]
  _QWORD FileInformation[3]; // [rsp+60h] [rbp-9h] BYREF
  unsigned int v22; // [rsp+78h] [rbp+Fh]
  int v23; // [rsp+7Ch] [rbp+13h]

  v3 = *(_QWORD *)(a2 + 256);
  v23 = 0;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  if ( *(_QWORD *)a2 != *(_QWORD *)(a2 + 8)
    && (int)IopQueryXxxInformation(*(struct _FILE_OBJECT **)(a2 + 56), 3, 0x18u, 0, (struct _IRP *)&v18, &v17, 0) >= 0 )
  {
    for ( i = 0x4000LL; ; i = 4096LL )
    {
      v8 = *(_QWORD *)(a2 + 8);
      v9 = *(_QWORD *)a2;
      v10 = i;
      if ( a3 >= i )
      {
        i = a3;
        v10 = 4096LL;
      }
      v11 = v8 - v9;
      if ( i <= v8 - v9 )
        v11 = i;
      v12 = v19 * (unsigned int)(v20 * HIDWORD(v20));
      if ( v12 <= 0x10000000 )
        break;
      v13 = (v12 - 0x10000000) >> 12;
      if ( v13 <= v11 )
        v11 = v13;
      if ( (*(_BYTE *)(a2 + 204) & 0x10) != 0 && v11 < a3 )
        break;
      FileInformation[0] = (v11 + v9) << 12;
      v14 = ~*(_BYTE *)(a1 + 79) & 0x20;
      FileInformation[2] = v8 << 12;
      FileInformation[1] = v9 << 12;
      v15 = *(struct _FILE_OBJECT **)(a2 + 56);
      v22 = (v14 | 8u) >> 3;
      if ( !IoSetInformation(v15, FileEndOfFileInformation, 0x20u, FileInformation) )
      {
        MiFinishPageFileExtension(v3, a2, v11);
        return v11;
      }
      if ( v10 == 4096 )
        return 0LL;
    }
  }
  return 0LL;
}
