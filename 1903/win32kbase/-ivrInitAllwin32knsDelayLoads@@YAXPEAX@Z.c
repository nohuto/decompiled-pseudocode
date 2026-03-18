/*
 * XREFs of ?ivrInitAllwin32knsDelayLoads@@YAXPEAX@Z @ 0x1C018DE98
 * Callers:
 *     InputInitialize @ 0x1C0060B14 (InputInitialize.c)
 * Callees:
 *     ivrFindImageProcAddress @ 0x1C018E3E8 (ivrFindImageProcAddress.c)
 */

void __fastcall ivrInitAllwin32knsDelayLoads(void *a1)
{
  void *v1; // rbx

  v1 = ghModwin32kns;
  if ( ghModwin32kns )
  {
    gpfnIVInitialize = (int (*)(int *))ivrFindImageProcAddress(ghModwin32kns, "IVInitialize");
    gpfnIVUninitialize = (int (*)(void))ivrFindImageProcAddress(v1, "IVUninitialize");
    gpfnIVRegisterChildNotification = (int (*)(struct _ETHREAD *, struct _ETHREAD *, void *, int (*)(void *, void *), unsigned int, void **))ivrFindImageProcAddress(v1, "IVRegisterChildNotification");
    gpfnIVUnregisterChildNotification = (int (*)(void *))ivrFindImageProcAddress(v1, "IVUnregisterChildNotification");
    gpfnIVSend = (int (*)(void *, unsigned int, struct _ETHREAD *, struct _ETHREAD *, void *, unsigned int, int (*)(struct _IVSRContext *), const struct CONTAINER_ID *))ivrFindImageProcAddress(v1, "IVSend");
    gpfnIVRecv = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))ivrFindImageProcAddress(
                                                                                           v1,
                                                                                           "IVRecv");
    gpfnIVBroadcast = (int (*)(void *, unsigned int, struct _ETHREAD *, struct _ETHREAD *, void *, unsigned int, int (*)(struct _IVSRContext *), const struct CONTAINER_ID *))ivrFindImageProcAddress(v1, "IVBroadcast");
    ivrFindImageProcAddress(v1, "IVFreeIVSRContext");
    gpfnIVResolveContainerId = (int (*)(const struct _GUID *, struct CONTAINER_ID *))ivrFindImageProcAddress(
                                                                                       v1,
                                                                                       "IVResolveContainerId");
  }
}
