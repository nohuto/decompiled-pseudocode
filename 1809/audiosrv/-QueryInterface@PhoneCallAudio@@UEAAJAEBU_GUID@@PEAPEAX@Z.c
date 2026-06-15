/*
 * XREFs of ?QueryInterface@PhoneCallAudio@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18011BFD0
 * Callers:
 *     ?QueryInterface@PhoneCallAudio@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800691A0 (-QueryInterface@PhoneCallAudio@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@PhoneCallAudio@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800691B0 (-QueryInterface@PhoneCallAudio@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@PhoneCallAudio@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800691C0 (-QueryInterface@PhoneCallAudio@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PhoneCallAudio::QueryInterface(PhoneCallAudio *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax

  v3 = a3 == 0LL ? 0x80004003 : 0;
  if ( !a3 )
    return v3;
  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_140c61e5_b527_421d_9d43_79a9ffd701d7.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_140c61e5_b527_421d_9d43_79a9ffd701d7.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_140c61e5_b527_421d_9d43_79a9ffd701d7.Data4;
  if ( !v4 )
  {
    *a3 = this;
    v5 = *(_QWORD *)this;
LABEL_15:
    (*(void (__fastcall **)(PhoneCallAudio *, const struct _GUID *, void **, PhoneCallAudio *))(v5 + 8))(
      this,
      a2,
      a3,
      this);
    return v3;
  }
  v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_e1fd1a76_d0e5_4694_a4a8_c63178a6c080.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_e1fd1a76_d0e5_4694_a4a8_c63178a6c080.Data1 )
    v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_e1fd1a76_d0e5_4694_a4a8_c63178a6c080.Data4;
  if ( !v6 )
  {
    a2 = (const struct _GUID *)((char *)this + 8);
LABEL_14:
    *a3 = (void *)((unsigned __int64)a2 & -(__int64)(this != 0LL));
    v5 = *(_QWORD *)this;
    goto LABEL_15;
  }
  v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_12f0ac85_d91a_4950_96a5_e7385ed7b7f4.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_12f0ac85_d91a_4950_96a5_e7385ed7b7f4.Data1 )
    v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_12f0ac85_d91a_4950_96a5_e7385ed7b7f4.Data4;
  if ( !v7 )
  {
    a2 = (const struct _GUID *)((char *)this + 16);
    goto LABEL_14;
  }
  return CUnknown::QueryInterface((PhoneCallAudio *)((char *)this + 24), a2, a3);
}
