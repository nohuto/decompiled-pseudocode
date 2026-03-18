/*
 * XREFs of ?GetGraphicsDeviceFromDevObjHandle@@YAPEAUtagGRAPHICS_DEVICE@@QEAX@Z @ 0x1C009E87C
 * Callers:
 *     ?W32kCddInitPdev@@YAJQEAUHDEV__@@QEAXPEAIPEAPEAU_devicemodeW@@PEAPEAX@Z @ 0x1C009E6A0 (-W32kCddInitPdev@@YAJQEAUHDEV__@@QEAXPEAIPEAPEAU_devicemodeW@@PEAPEAX@Z.c)
 *     EngQueryW32kCddInterface @ 0x1C009E700 (EngQueryW32kCddInterface.c)
 * Callees:
 *     <none>
 */

wchar_t *__fastcall GetGraphicsDeviceFromDevObjHandle(void *const a1)
{
  wchar_t *result; // rax

  for ( result = gpGraphicsDeviceList;
        result && *((void *const *)result + 17) != a1;
        result = (wchar_t *)*((_QWORD *)result + 16) )
  {
    ;
  }
  return result;
}
