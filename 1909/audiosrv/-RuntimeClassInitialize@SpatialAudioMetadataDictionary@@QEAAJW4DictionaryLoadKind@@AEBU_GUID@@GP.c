/*
 * XREFs of ?RuntimeClassInitialize@SpatialAudioMetadataDictionary@@QEAAJW4DictionaryLoadKind@@AEBU_GUID@@GPEBGPEAEI@Z @ 0x180136F98
 * Callers:
 *     ??$MakeAndInitialize@VSpatialAudioMetadataDictionary@@V1@W4DictionaryLoadKind@@AEBU_GUID@@AEAG$$TAEAPEAEAEAI@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioMetadataDictionary@@$$QEAW4DictionaryLoadKind@@AEBU_GUID@@AEAG$$QEA$$TAEAPEAEAEAI@Z @ 0x180135E98 (--$MakeAndInitialize@VSpatialAudioMetadataDictionary@@V1@W4DictionaryLoadKind@@AEBU_GUID@@AEAG$$.c)
 * Callees:
 *     _TlgWrite @ 0x18001DFF0 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x18001F9C0 (_TlgCreateWsz.c)
 *     ??2@YAPEAX_K@Z @ 0x180057130 (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x18006C963 (memcpy_0.c)
 *     ?LoadDictionary@SpatialAudioMetadataDictionary@@AEAAJW4DictionaryLoadKind@@AEBU_GUID@@GPEBG@Z @ 0x180136A88 (-LoadDictionary@SpatialAudioMetadataDictionary@@AEAAJW4DictionaryLoadKind@@AEBU_GUID@@GPEBG@Z.c)
 */

__int64 __fastcall SpatialAudioMetadataDictionary::RuntimeClassInitialize(
        __int64 a1,
        int a2,
        const GUID *a3,
        const GUID *a4,
        const WCHAR *pwsz,
        void *Src,
        unsigned int Size)
{
  int v9; // ebx
  void *v10; // rax
  unsigned int v11; // edx
  __int64 v12; // r9
  unsigned __int8 *v13; // rcx
  int v14; // r8d
  unsigned int v15; // eax
  LPCGUID v16; // r8
  LPCGUID v17; // r9
  const GUID *v19; // r8
  const GUID *v20; // r9
  int Dictionary; // [rsp+30h] [rbp-61h] BYREF
  int v22; // [rsp+34h] [rbp-5Dh] BYREF
  __int64 v23; // [rsp+38h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-51h] BYREF
  const char *v25; // [rsp+60h] [rbp-31h]
  __int64 v26; // [rsp+68h] [rbp-29h]
  int *p_Dictionary; // [rsp+70h] [rbp-21h]
  __int64 v28; // [rsp+78h] [rbp-19h]
  int *v29; // [rsp+80h] [rbp-11h]
  __int64 v30; // [rsp+88h] [rbp-9h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-1h] BYREF

  Dictionary = 0;
  if ( !Src )
  {
    Dictionary = SpatialAudioMetadataDictionary::LoadDictionary(a1, a2, (__int64)a3, (__int64)a4, (__int64)pwsz);
    v9 = Dictionary;
    v22 = Dictionary;
    if ( Dictionary < 0 )
    {
      if ( (unsigned int)dword_1801B53C0 > 2 )
      {
        v26 = 55LL;
        v25 = "SpatialAudioMetadataDictionary::RuntimeClassInitialize";
        p_Dictionary = (int *)&v23;
        v29 = &v22;
        LODWORD(v23) = 149;
        v28 = 4LL;
        v30 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1801B53C0, &unk_18017BC7B, v19, v20, 5u, &pData);
        v9 = Dictionary;
      }
LABEL_12:
      if ( v9 >= 0 )
        return (unsigned int)v9;
      goto LABEL_13;
    }
LABEL_7:
    *(_QWORD *)(a1 + 96) = 0LL;
    if ( *(_DWORD *)(a1 + 124) )
    {
      v11 = 0;
      v12 = *(unsigned int *)(a1 + 124);
      v13 = (unsigned __int8 *)(*(_QWORD *)(a1 + 128) + 1LL);
      v14 = 0;
      do
      {
        v15 = *v13;
        v14 += v15 + 1;
        v13 += 2;
        *(_DWORD *)(a1 + 96) = v14;
        if ( v11 <= v15 )
          v11 = v15;
        *(_DWORD *)(a1 + 100) = v11;
        --v12;
      }
      while ( v12 );
    }
    goto LABEL_12;
  }
  if ( (Size & 1) == 0 )
  {
    *(_DWORD *)(a1 + 124) = Size >> 1;
    v10 = operator new(saturated_mul(Size >> 1, 2uLL));
    *(_QWORD *)(a1 + 128) = v10;
    memcpy_0(v10, Src, Size);
    v9 = Dictionary;
    goto LABEL_7;
  }
  v9 = -2147024809;
  if ( (unsigned int)dword_1801B53C0 > 2 )
  {
    v26 = 55LL;
    v25 = "SpatialAudioMetadataDictionary::RuntimeClassInitialize";
    p_Dictionary = &v22;
    v29 = (int *)&v23;
    v22 = 140;
    v28 = 4LL;
    LODWORD(v23) = -2147024809;
    v30 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1801B53C0, &unk_18017BCAD, a3, a4, 5u, &pData);
  }
  Dictionary = -2147024809;
LABEL_13:
  if ( (unsigned int)dword_1801B53C0 > 2 )
  {
    v23 = a1;
    v25 = (const char *)&v23;
    v26 = 8LL;
    p_Dictionary = &Dictionary;
    v28 = 4LL;
    v29 = (int *)a3;
    v30 = 16LL;
    TlgCreateWsz(&pDesc, pwsz);
    TlgWrite((TraceLoggingHProvider)&dword_1801B53C0, &unk_18017BD31, v16, v17, 6u, &pData);
    return (unsigned int)Dictionary;
  }
  return (unsigned int)v9;
}
