/*
 * XREFs of ?ndisEtwRegisterGuids@@YAJPEAUWMIREGINFOW@@KPEAK@Z @ 0x1C0031F34
 * Callers:
 *     ?ndisDriverSystemDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C0031E38 (-ndisDriverSystemDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0011C88 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0032368 (WPP_RECORDER_SF_D.c)
 *     memmove @ 0x1C0041100 (memmove.c)
 *     memset @ 0x1C0041440 (memset.c)
 */

__int64 __fastcall ndisEtwRegisterGuids(struct WMIREGINFOW *a1, int a2, unsigned int *a3)
{
  unsigned int v4; // ebp
  int Length; // r14d
  ULONG v7; // edi
  GUID v8; // xmm0
  int v9; // edx
  char *v10; // rcx
  __int64 result; // rax

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      1,
      72,
      (struct _GUID *)&WPP_34b7afbc912539598d6d69098c3d2070_Traceguids);
  }
  if ( !a3 || !a1 || v4 < 4 )
    return 3221225485LL;
  Length = ndisRegistryPath.Length;
  v7 = ndisRegistryPath.Length + 90;
  if ( v7 > v4 )
  {
    a1->BufferSize = v7;
    result = 3221225507LL;
    *a3 = 4;
  }
  else
  {
    memset(a1, 0, v7);
    a1->BufferSize = v7;
    a1->MofResourceName = Length + 58;
    a1->GuidCount = 1;
    a1->RegistryPath = 56;
    v8 = ndisControlGuid;
    a1[2].BufferSize |= 0x81000u;
    a1[2].NextWmiRegInfo = 0;
    *(_QWORD *)&a1[2].RegistryPath = 0LL;
    *(GUID *)&a1[1].NextWmiRegInfo = v8;
    LOWORD(a1[2].GuidCount) = ndisRegistryPath.Length;
    memmove((char *)&a1[2].GuidCount + 2, ndisRegistryPath.Buffer, ndisRegistryPath.Length);
    v10 = (char *)a1 + a1->MofResourceName;
    *a3 = v7;
    *(_WORD *)v10 = 30;
    *(_OWORD *)(v10 + 2) = *(_OWORD *)L"MofResourceName";
    *(_QWORD *)(v10 + 18) = *(_QWORD *)L"rceName";
    *(_DWORD *)(v10 + 26) = *(_DWORD *)L"ame";
    *((_WORD *)v10 + 15) = aMofresourcenam[14];
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 4;
      WPP_RECORDER_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v9,
        1,
        73,
        (struct _GUID *)&WPP_34b7afbc912539598d6d69098c3d2070_Traceguids,
        0);
    }
    return 0LL;
  }
  return result;
}
