/*
 * XREFs of MiLogHotPatchOperationStatus @ 0x14088F418
 * Callers:
 *     MiApplyHotPatchToDriver @ 0x14088CFCC (MiApplyHotPatchToDriver.c)
 *     MiHotPatchImage @ 0x14088DFC4 (MiHotPatchImage.c)
 *     MiLoadHotPatch @ 0x14088E6D0 (MiLoadHotPatch.c)
 *     MiUnloadHotPatch @ 0x1408916B0 (MiUnloadHotPatch.c)
 *     MmRegisterHotPatch @ 0x140A3C60C (MmRegisterHotPatch.c)
 * Callees:
 *     PsGetProcessId @ 0x140004670 (PsGetProcessId.c)
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     _TlgKeywordOn @ 0x14008B9D4 (_TlgKeywordOn.c)
 *     _TlgCreateSz @ 0x1400D6128 (_TlgCreateSz.c)
 *     MiFillLogProcessInfo @ 0x14012A978 (MiFillLogProcessInfo.c)
 *     _TlgWriteEx @ 0x14013CFBC (_TlgWriteEx.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 */

char __fastcall MiLogHotPatchOperationStatus(int a1, int a2, UNICODE_STRING *a3, int a4, int a5)
{
  char result; // al
  UNICODE_STRING *p_DestinationString; // rbx
  const struct _TlgProvider_t *v10; // rdi
  struct _KPROCESS *v11; // r9
  ULONG64 v12; // r8
  ULONG v13; // r9d
  ULONG64 v14; // r8
  ULONG v15; // r9d
  const struct _TlgProvider_t *v16; // r10
  ULONG64 v17; // r8
  ULONG v18; // r9d
  const struct _TlgProvider_t *v19; // r10
  const GUID *v20; // [rsp+28h] [rbp-E0h]
  const GUID *v21; // [rsp+30h] [rbp-D8h]
  unsigned int ProcessId; // [rsp+48h] [rbp-C0h] BYREF
  int v23; // [rsp+4Ch] [rbp-BCh] BYREF
  int v24; // [rsp+50h] [rbp-B8h] BYREF
  int v25; // [rsp+54h] [rbp-B4h] BYREF
  int v26; // [rsp+58h] [rbp-B0h] BYREF
  int v27; // [rsp+5Ch] [rbp-ACh] BYREF
  int v28; // [rsp+60h] [rbp-A8h] BYREF
  int v29; // [rsp+64h] [rbp-A4h] BYREF
  int v30; // [rsp+68h] [rbp-A0h] BYREF
  int v31; // [rsp+6Ch] [rbp-9Ch] BYREF
  __int64 v32; // [rsp+70h] [rbp-98h] BYREF
  LPCSTR psz; // [rsp+78h] [rbp-90h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-88h] BYREF
  EVENT_DATA_DESCRIPTOR v35; // [rsp+98h] [rbp-70h] BYREF
  int *v36; // [rsp+B8h] [rbp-50h]
  __int64 v37; // [rsp+C0h] [rbp-48h]
  int *v38; // [rsp+C8h] [rbp-40h]
  __int64 v39; // [rsp+D0h] [rbp-38h]
  int *v40; // [rsp+D8h] [rbp-30h]
  __int64 v41; // [rsp+E0h] [rbp-28h]
  _DWORD *v42; // [rsp+E8h] [rbp-20h]
  __int64 v43; // [rsp+F0h] [rbp-18h]
  wchar_t *Buffer; // [rsp+F8h] [rbp-10h]
  _DWORD v45[2]; // [rsp+100h] [rbp-8h] BYREF
  EVENT_DATA_DESCRIPTOR v46; // [rsp+108h] [rbp+0h] BYREF
  int *v47; // [rsp+128h] [rbp+20h]
  __int64 v48; // [rsp+130h] [rbp+28h]
  int *v49; // [rsp+138h] [rbp+30h]
  __int64 v50; // [rsp+140h] [rbp+38h]
  int *v51; // [rsp+148h] [rbp+40h]
  __int64 v52; // [rsp+150h] [rbp+48h]
  _DWORD *v53; // [rsp+158h] [rbp+50h]
  __int64 v54; // [rsp+160h] [rbp+58h]
  wchar_t *v55; // [rsp+168h] [rbp+60h]
  _DWORD v56[2]; // [rsp+170h] [rbp+68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+178h] [rbp+70h] BYREF
  unsigned int *p_ProcessId; // [rsp+198h] [rbp+90h]
  __int64 v59; // [rsp+1A0h] [rbp+98h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+1A8h] [rbp+A0h] BYREF
  int *v61; // [rsp+1B8h] [rbp+B0h]
  __int64 v62; // [rsp+1C0h] [rbp+B8h]
  int *v63; // [rsp+1C8h] [rbp+C0h]
  __int64 v64; // [rsp+1D0h] [rbp+C8h]
  int *v65; // [rsp+1D8h] [rbp+D0h]
  __int64 v66; // [rsp+1E0h] [rbp+D8h]
  _DWORD *v67; // [rsp+1E8h] [rbp+E0h]
  __int64 v68; // [rsp+1F0h] [rbp+E8h]
  wchar_t *v69; // [rsp+1F8h] [rbp+F0h]
  _DWORD v70[2]; // [rsp+200h] [rbp+F8h] BYREF

  result = 0;
  p_DestinationString = a3;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  if ( hProvider )
  {
    if ( !a3 )
    {
      RtlInitUnicodeString(&DestinationString, 0LL);
      p_DestinationString = &DestinationString;
    }
    result = a5;
    if ( a5 )
    {
      if ( a5 == 1 )
      {
        if ( hProvider->LevelPlus1 > 5 )
        {
          result = TlgKeywordOn(hProvider, 0x400000000020uLL);
          if ( result )
          {
            v26 = a4;
            v36 = &v26;
            v38 = &v27;
            v40 = &v28;
            v42 = v45;
            Buffer = p_DestinationString->Buffer;
            v45[0] = p_DestinationString->Length;
            v27 = a1;
            v28 = a2;
            v37 = 4LL;
            v39 = 4LL;
            v41 = 4LL;
            v43 = 2LL;
            v45[1] = 0;
            return TlgWriteEx(v16, &unk_14038E1F1, v14, v15, v20, v21, 7u, &v35);
          }
        }
      }
      else if ( hProvider->LevelPlus1 > 5 )
      {
        result = TlgKeywordOn(hProvider, 0x400000000020uLL);
        if ( result )
        {
          v29 = a4;
          v47 = &v29;
          v49 = &v30;
          v51 = &v31;
          v53 = v56;
          v55 = p_DestinationString->Buffer;
          v56[0] = p_DestinationString->Length;
          v30 = a1;
          v31 = a2;
          v48 = 4LL;
          v50 = 4LL;
          v52 = 4LL;
          v54 = 2LL;
          v56[1] = 0;
          return TlgWriteEx(v19, &unk_14038E254, v17, v18, v20, v21, 7u, &v46);
        }
      }
    }
    else
    {
      result = MiFillLogProcessInfo((__int64)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[6], &v32, &psz);
      v10 = hProvider;
      if ( hProvider->LevelPlus1 > 5 )
      {
        result = TlgKeywordOn(hProvider, 0x400000000020uLL);
        if ( result )
        {
          ProcessId = (unsigned int)PsGetProcessId(v11);
          p_ProcessId = &ProcessId;
          v23 = a4;
          v24 = a1;
          v25 = a2;
          v59 = 4LL;
          TlgCreateSz(&pDesc, psz);
          v62 = 4LL;
          v63 = &v24;
          v61 = &v23;
          v65 = &v25;
          v67 = v70;
          v69 = p_DestinationString->Buffer;
          v70[0] = p_DestinationString->Length;
          v64 = 4LL;
          v66 = 4LL;
          v68 = 2LL;
          v70[1] = 0;
          return TlgWriteEx(v10, &unk_14038E3E5, v12, v13, v20, v21, 9u, &pData);
        }
      }
    }
  }
  return result;
}
