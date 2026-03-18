/*
 * XREFs of ?InitializeUserModeDriverNames@ADAPTER_RENDER@@AEAAJPEAU_UNICODE_STRING@@0@Z @ 0x1C0159990
 * Callers:
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0158E80 (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 * Callees:
 *     ?RtlStringCbLengthW@@YAJPEBG_KPEA_K@Z @ 0x1C00020BC (-RtlStringCbLengthW@@YAJPEBG_KPEA_K@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::InitializeUserModeDriverNames(
        ADAPTER_RENDER *this,
        struct _UNICODE_STRING *a2,
        struct _UNICODE_STRING *a3)
{
  __int128 v3; // xmm0
  unsigned __int64 Length; // rdi
  unsigned int v5; // ebx
  const unsigned __int16 *v7; // r15
  unsigned __int64 v9; // r9
  __int64 v10; // rsi
  unsigned int v11; // ebp
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  _QWORD *v17; // rax
  struct _UNICODE_STRING v18; // [rsp+20h] [rbp-38h]
  unsigned __int64 v19; // [rsp+68h] [rbp+10h] BYREF

  v3 = (__int128)*a2;
  Length = a2->Length;
  v5 = 0;
  v19 = 0LL;
  *(_DWORD *)(&v18.MaximumLength + 1) = DWORD1(v3);
  v7 = (const unsigned __int16 *)*((_QWORD *)&v3 + 1);
  v9 = 0LL;
  LODWORD(v10) = 0;
  v11 = 0;
  while ( 1 )
  {
    if ( !Length )
      return (unsigned int)v10;
    v7 += v9 >> 1;
    v18.Buffer = (wchar_t *)v7;
    v12 = RtlStringCbLengthW(v7, Length, &v19);
    v10 = v12;
    if ( v12 < 0 )
      break;
    v9 = v19;
    v18.Length = v19;
    if ( Length > v19 )
    {
      v9 = v19 + 2;
      v19 += 2LL;
    }
    v18.MaximumLength = v9;
    ++v11;
    Length -= (unsigned __int16)v9;
    *a3++ = v18;
    if ( v11 >= 4 )
      return (unsigned int)v10;
  }
  v17 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v15);
  v17[3] = v11;
  v17[4] = *((_QWORD *)this + 2);
  v17[5] = v10;
  WdLogEvent5_WdWarning(v17);
  if ( !v11 )
    return (unsigned int)v10;
  return v5;
}
