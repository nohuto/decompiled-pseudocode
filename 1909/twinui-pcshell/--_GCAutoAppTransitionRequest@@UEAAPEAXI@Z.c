/*
 * XREFs of ??_GCAutoAppTransitionRequest@@UEAAPEAXI@Z @ 0x1803C8FA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18008A5F0 (--3@YAXPEAX@Z.c)
 *     ??1CAutoAppTransitionRequest@@UEAA@XZ @ 0x1803C8B20 (--1CAutoAppTransitionRequest@@UEAA@XZ.c)
 */

CAutoAppTransitionRequest *__fastcall CAutoAppTransitionRequest::`scalar deleting destructor'(
        CAutoAppTransitionRequest *this,
        char a2)
{
  CAutoAppTransitionRequest::~CAutoAppTransitionRequest(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
